#include "server.h"
#include <iostream>
int Server::socketStartup()
{
    int iResult;

    iResult = WSAStartup(MAKEWORD(2, 2), &this->data);
    if (iResult != 0)
    {
        std::cout << "WSA Startup Failed" << std::endl;
        return 1;
    }

    return iResult;
}