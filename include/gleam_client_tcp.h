#include <string>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#ifdef __linux__
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <netdb.h>
    #include <sys/types.h>
    #include <arpa/inet.h>
#else

#endif


typedef std::string res;

class gleamClientTcp{
    public:
         gleamClientTcp(){}
        ~gleamClientTcp(){}

        res fetch(std::string url, int port = 443){

        }

        
};

