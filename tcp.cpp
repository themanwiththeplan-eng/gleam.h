  #include <sys/types.h>
  #include <sys/socket.h>
  #include <netinet/in.h>
  #include <arpa/inet.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <unistd.h>
  
  int main(void)
  {
    struct sockaddr_in sa;
    int res;
    int SocketFD;

    SocketFD = socket(PF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (SocketFD == -1) {
      perror("cannot create socket");
      exit(EXIT_FAILURE);
    }
  
    memset(&sa, 0, sizeof sa);
  
    sa.sin_family = AF_INET;
    sa.sin_port = htons(1100);
    res = inet_pton(AF_INET, "8.8.8.8", &sa.sin_addr);

    if (connect(SocketFD, (struct sockaddr *)&sa, sizeof sa) == -1) {
      perror("connect failed");
      close(SocketFD);
      exit(EXIT_FAILURE);
    }
  
    /* perform read write operations ... */
  
    close(SocketFD);
    return EXIT_SUCCESS;
  }

  /*
    This is an example of Berkeley Sockets from https://en.wikipedia.org/wiki/Berkeley_sockets#Client for a tcp
    implementation of a TCP client that this library will be based around  
  */