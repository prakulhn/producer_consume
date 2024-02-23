#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argC, char ** argV[])
{
    printf("We are in hello.c \n");
    printf("PID of hello.c is %d \n", getpid());
    return 0;
}
