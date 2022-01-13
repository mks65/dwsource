#include "networking.h"

int main(int argc, char **argv) {

  int server_socket;
  char buffer[BUFFER_SIZE];
  struct addrinfo *results;

  if (argc == 2)
    results = udp_client_setup( argv[1], &server_socket);
  else
    results = udp_client_setup( TEST_IP, &server_socket);

  while (1) {
    printf("enter data: ");
    fgets(buffer, sizeof(buffer), stdin);
    *strchr(buffer, '\n') = 0;

    sendto(server_socket, buffer, BUFFER_SIZE, 0, results->ai_addr, results->ai_addrlen);

    recvfrom(server_socket, buffer, sizeof(buffer), 0, results->ai_addr, &(results->ai_addrlen));
    printf("received: [%s]\n", buffer);
  }
}
