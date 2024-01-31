#include "gleam_vars.h"
#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#ifndef gleam_client_tcp_h
#define gleam_client_tcp_h
#endif

#pragma once

#ifdef __linux__
    #include <sys/socket.h>
    #include <netinet/in.h>
    #include <netdb.h>
    #include <sys/types.h>
    #include <arpa/inet.h>
#else

#endif

namespace gleam {
    class gleam_client_tcp_build
    {
    public:
        gleam_client_tcp_build(void);
        ~gleam_client_tcp_build(void);

        void kill();

        
    };
    
    
};