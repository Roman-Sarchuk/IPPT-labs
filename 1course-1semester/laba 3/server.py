import socket
import time

host = '127.0.0.1'  # !!! A local IP was written. You may need to enter your PC's IP address !!!
port = 9090

clients = []

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((host, port))

exits = False

print(f'IP :: {host}\n')
print('[ Server Started ]')

while not exits:
    try:
        data, addr = s.recvfrom(1024)

        if addr not in clients:
            clients.append(addr)

        itsatime = time.strftime('%Y-%m-%d-%H.%M.%S', time.localtime())

        print('['+addr[0]+']=['+str(addr[1])+']=['+itsatime+']/', end='')
        print(data.decode('utf-8'))

        for client in clients:
            if addr != client:
                s.sendto(data, client)
    except:
        print('\n[ Server Stopped ]')
        exits = True

s.close()
