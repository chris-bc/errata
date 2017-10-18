import socket;
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM);
sock.bind(("", 80));
sock.listen(5);
while True:
	conn, addr = sock.accept();
	data = conn.recv(1024);
	conn.sendall(b'Got a request!\r\n');
	conn.close();
sock.close();

