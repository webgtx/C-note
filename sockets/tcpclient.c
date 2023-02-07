#include <stdarg.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define SERVER_PORT 80
#define MAXLINE 4096
#define SA struct sockaddr

// END - Error And Die
void end(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  vfprintf(stdout, fmt, ap);
  fprintf(stdout, "\n");
  fflush(stdout);
  va_end(ap);
  exit(1);
}

int main(int argc, char **argv) {
  int sockfd, n;
  int sendbytes;
  char sendline[MAXLINE];
  char recvline[MAXLINE];
  struct sockaddr_in servaddr;

  if (argc <= 1)
    end("using: %s <ip address>", argv[0]);

  if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    end("Error while creating the socket");
  
  bzero(&servaddr, sizeof(servaddr));
  // # Set port and Address Family 
  // htons - Host to Network short 
  servaddr.sin_port = htons(SERVER_PORT);
  servaddr.sin_family = AF_INET;

  // # Translate addres
  if (inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0) 
    end("Address translation error");

  // # Connect to the server 
  if (connect(sockfd, (SA *) &servaddr, sizeof(servaddr)) < 0)
    end("Connection failed");

  puts("Connection complete");
  
  // Prepare the message
  sprintf(sendline, "GET / HTTP/1.1\r\n\r\n");
  sendbytes = strlen(sendline);

  if (write(sockfd, sendline, sendbytes) != sendbytes)
    end("Write error");

  while((n = read(sockfd, recvline, MAXLINE - 1)) > 0) {
    printf("%s", recvline);
    memset(recvline, 0, MAXLINE);
  }

  if (n < 0)
    end("read error");
  
}
