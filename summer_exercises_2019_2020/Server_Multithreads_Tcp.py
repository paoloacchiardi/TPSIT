import socket
import threading
ip_server = '127.0.0.1'
porta = 2550
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server.bind((ip_server, porta))   
print(f"Server is online {ip_server}:{porta}")

def client(connection,ip_client):
    while(True):
        data = connection.recv(4096)  
        if(data.decode() == "exit"):
            break
        print(f"{str(ip_client)}: {data.decode()}")    
        connection.sendall(data)
    server.close()

def main():
    clients = list()
    while (True):
        server.listen()
        connection, ip_client = server.accept()
        clients.append(threading.Thread(target = client, args=(connection,ip_client)))
        clients[-1].start()
    for client in clients:
        client.join()

if __name__ == "__main__":
    main()