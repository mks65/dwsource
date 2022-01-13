#include "networking.h"

void process(char *s);
void subserver(int from_client);

int main() {

  int listen_socket;
  listen_socket = udp_server_setup();
  int client_socket = 0;
  socklen_t sock_size;
  struct sockaddr_storage client_address;
  sock_size = sizeof(client_address);

  char buffer[BUFFER_SIZE];

  while (recvfrom(listen_socket, buffer, BUFFER_SIZE, 0, (struct sockaddr *)&client_address, &sock_size)) {

    printf("[subserver %d] received: [%s]\n", getpid(), buffer);
    process(buffer);
    int i = sendto(listen_socket, buffer, sizeof(buffer), 0, (struct sockaddr *)&client_address, sock_size);
    error_check(i, "sendto");
  }//end read loop

  close(client_socket);
  exit(0);
}

void process(char * s) {
  while (*s) {
    if (*s >= 'a' && *s <= 'z')
      *s = ((*s - 'a') + 13) % 26 + 'a';
    else  if (*s >= 'A' && *s <= 'Z')
      *s = ((*s - 'a') + 13) % 26 + 'a';
    s++;
  }
}
