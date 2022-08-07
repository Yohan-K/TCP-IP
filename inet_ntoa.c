//
// Created by kimjeonghyeon on 2022-08-06.
//
#include <stdio.h>
#include <string.h>
#include <winsock2.h>

int main(int argc, char *argv[])
{
    struct sockaddr_in addr1, addr2;
    char *str_ptr;
    char str_arr[20];

    addr1.sin_addr.s_addr=htonl(0x1020304);
    addr2.sin_addr.s_addr=htonl(0x1010101);

    str_ptr=inet_ntoa(addr1.sin_addr);
    strcpy(str_arr, str_ptr);
    printf("Dotted-Decimal notation1: %s \n", str_ptr);

    inet_ntoa(addr2.sin_addr);
    printf("Dotted-Decimal notation2: %s \n", str_ptr);
    printf("Dotted-Decimal notation3: %s \n", str_arr);

    printf("str_arr sizeof: %d \n", sizeof(str_arr));
    printf("str_arr[0]: %c \n", str_arr[0]); // 1
    printf("str_arr[1]: %c \n", str_arr[1]); // .
    printf("str_arr[2]: %c \n", str_arr[2]); // 2
    printf("str_arr[3]: %c \n", str_arr[3]); // .
    printf("str_arr[4]: %c \n", str_arr[4]); // 3
    printf("str_arr[5]: %c \n", str_arr[5]); // .
    printf("str_arr[6]: %c \n", str_arr[6]); // 4
    printf("str_arr[7]: %c \n", str_arr[7]); //
    printf("str_arr[8]: %c \n", str_arr[8]); // ?
    return 0;
}