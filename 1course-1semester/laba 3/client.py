import socket
import threading
import time
import cezar_coding

key = 8194

shutdown = False
join = False


def receiving(name, sock):
    while not shutdown:
        try:
            while True:
                data, addr = sock.recvfrom(1024)

                text_1 = ''
                text_2 = ''
                decrypt = ''
                k = False
                for j in data.decode('utf-8'):
                    if j == ':':
                        k = True
                        decrypt += j
                    elif k is False or j == ' ':
                        decrypt += j
                    else:
                        decrypt += cezar_coding.encryption(j, -1)
                print(decrypt)

                time.sleep(0.2)
        except:
            pass


host = socket.gethostbyname(socket.gethostname())
port = 0

server = ('127.0.0.1', 9090)    # !!! A local IP was written. You may need to enter your PC's IP address !!!

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((host, port))
s.setblocking(False)

alias = input('Name: ')

rT = threading.Thread(target=receiving, args=('RecvThread', s))
rT.start()

while shutdown is False:
    if join is False:

        s.sendto(('['+alias+'] => join chat ').encode('utf-8'), server)
        join = True
    else:
        try:
            message = input()

            message = cezar_coding.encryption(message, 1)

            if message != '':
                s.sendto(('['+alias+'] :: '+message).encode('utf-8'), server)

            time.sleep(0.2)
        except:
            s.sendto(('['+alias+'] <= left chat ').encode('utf-8'), server)
            shutdown = True

rT.join()
s.close()
