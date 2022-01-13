forking: fclient fserver

select: fclient sserver

udp: uclient userver

sserver: select_server.o networking.o
	gcc -o server select_server.o networking.o

fserver: forking_server.o networking.o
	gcc -o server forking_server.o networking.o

userver: udp_server.o networking.o
	gcc -o server udp_server.o networking.o

fclient: client.o networking.o
	gcc -o client client.o networking.o

uclient: udp_client.o networking.o
	gcc -o client udp_client.o networking.o

client.o: client.c networking.h
	gcc -c client.c

udp_client.o: udp_client.c networking.h
	gcc -c udp_client.c

select_server.o: select_server.c networking.h
	gcc -c select_server.c

forking_server.o: forking_server.c networking.h
	gcc -c forking_server.c

udp_server.o: udp_server.c networking.h
	gcc -c udp_server.c

networking.o: networking.c networking.h
	gcc -c networking.c

clean:
	rm *.o
	rm *~
