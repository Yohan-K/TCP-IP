//
// Created by kimjeonghyeon on 2022-08-06.
//
#include <stdio.h>
#include <stdlib.h>
// #include <arpa/inet.h>
// 윈도우 전용 소켓 함수
#include <winsock2.h>
void ErrorHandling(char *message);

int main(int argc, char *argv[])
{
    char *addr = "127.232.124.79";
    struct sockaddr_in addr_inet;

    if(!inet_aton(addr, &addr_inet.sin_addr))
        ErrorHandling("Conversion error");
    else
        printf("Network ordered integer addr: %#x \n", addr_inet.sin_addr.s_addr);
    return 0;
}

void ErrorHandling(char *message)
{
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}
