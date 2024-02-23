#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argC, char ** argV)
{
    printf("PID of example .C = %d \n", getpid());
    char * argS[] = {"Hello","C","Programming", NULL};
    execV("/hello", argS);
    printf("Back to example .C");
    return 0;
} 
