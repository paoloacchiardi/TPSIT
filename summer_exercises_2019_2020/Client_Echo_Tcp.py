import socket
ip_server = '127.0.0.1'
porta_server = 2550
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 
client.connect((ip_server,porta_server))
while(True):
    stringa = input("Insert message: ")
    client.sendall(stringa.encode())
    if(stringa == "exit"):
        break
    messaggio = client.recv(4096) 
    print("message: " + messaggio.decode())
client.close()