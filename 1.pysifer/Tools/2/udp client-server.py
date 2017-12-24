# Sifer Aseph
# UDP Client-Server

import socket

target_host = "127.0.0.1"
target_port = 80

# create a socket object
client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# https://stackoverflow.com/questions/47326955/python-udp-client-did-not-respond
client.bind((target_host, target_port))

# send some data
client.sendto("AAABBBCCC",(target_host,target_port))

# receive some data
data, addr = client.recvfrom(4096)

print data
