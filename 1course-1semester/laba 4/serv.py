import socket
import time

host = '192.168.0.103'
port = 9090

clients = []
name = []
data_lin = ''
data_join = ''
data_xy = ''
goal = '0'

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((host, port))

exits = False

print('--- [ Server ] ---')
print(f'IP :: {host}\n')
print('[ Server Started ]')

while not exits:
    try:
        data, addr = s.recvfrom(1024)
        data = data.decode('utf-8')

        # ---defining the message type---
        if '$' in data:  # $ - is indicated only during the transfer of coordinates
            mes = True
        elif '&' in data:   # & - is indicated only during the transmission of the message about hitting the goal
            mes = None
        else:
            mes = False
        # ----------------------------------

        # ---processing of received data---
        if mes is True:  # coordinate processing
            good = True
            data_lin = data.split('$')
            data_xy = f'{data_lin[1]}${data_lin[2]}'                # [0] - map | [1] - x | [2] - y
            data = data_lin[0] + data_lin[1] + ' ; ' + data_lin[2]  # map = '[Ball -> Gamer1/2] :: '
        elif mes is False:   # connect processing                    # map = '[Gamer1/2 -> Ball] :: '
            good = False
            name.append(data)
        else:   # processing message about hitting the goal
            good = None
            data_lin = data.split('&')          # [0] - map | [1] - '!Goal to Gamer1/2!'
            data = data_lin[0] + data_lin[1]    # map = '[Ball -> Goal_g1/2] :: '
            if data_lin[0] == '[Ball -> Goal_g1] :: ':
                goal = '1'
            elif data_lin[0] == '[Ball -> Goal_g2] :: ':
                goal = '2'
        # -------------------------------

        if addr not in clients:
            clients.append(addr)

        itsatime = time.strftime('%Y-%m-%d-%H.%M.%S', time.localtime())

        # ---data output on the server---
        print('['+addr[0]+']=['+str(addr[1])+']=['+itsatime+']/', end='')
        if mes is True:  # coordinates output
            print(data)
        elif mes is False:   # connect output
            print('[' + data + ']' + ' => join')
            if len(name) == 3:  # if all three part are connected
                print('---All connecting---')
        else:
            print(data)
        # --------------------------------

        # ---sending data---
        if good is True:    # sending coordinates and info. about hitting the goal
            # sending data about moving
            if data_lin[0] == '[Ball -> Gamer1] :: ':
                s.sendto(data_xy.encode('utf-8'), clients[name.index('g1.py')])
            elif data_lin[0] == '[Ball -> Gamer2] :: ':
                s.sendto(data_xy.encode('utf-8'), clients[name.index('g2.py')])
            elif data_lin[0] == '[Gamer1 -> Ball] :: ' or data_lin[0] == '[Gamer2 -> Ball] :: ':
                s.sendto(f'{data_lin[0]}${data_xy}'.encode('utf-8'), clients[name.index('ball.py')])
        elif good is None:     # sending message about hitting the goal
            if data_lin[0] == '[Ball -> Goal_g1] :: ':
                s.sendto(goal.encode('utf-8'), clients[name.index('ball.py')])
                s.sendto(goal.encode('utf-8'), clients[name.index('g2.py')])
            elif data_lin[0] == '[Ball -> Goal_g2] :: ':
                s.sendto(goal.encode('utf-8'), clients[name.index('ball.py')])
                s.sendto(goal.encode('utf-8'), clients[name.index('g1.py')])
        elif good is False:   # sending message about connection
            message_1 = '------- [ You join ] -------\n'
            message_2 = '---MAP---'
            data_join = f'{message_1}{message_2}'.encode('utf-8')
            s.sendto(data_join, addr)
        # -----------------------
        data = ''
        data_lin = []
        mes = ''
        good = ''
    except:
        print('\n[ Server Stopped ]')
        exits = True

s.close()
