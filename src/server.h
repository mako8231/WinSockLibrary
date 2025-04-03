#ifndef SERVER_H
#define SERVER_H

// Protocol integers
#define TCP_PROTOCOL 0
#define UDP_PROTOCOL 1

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <vector>
#include <process.h>

#pragma comment(lib, "Ws2_32.lib")

// The server class
class Server
{
public:
    // Default buffer lenght
    unsigned int defaultBufferLen;
    // Server port
    char *port;
    // Current Protocol:
    char protocol;
    // WSA DATA
    WSADATA data;
    // Start the WSA Socket
    int socketStartup();
};

#endif