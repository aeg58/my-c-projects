#include <stdio.h>
#define DEBUG

int main()
{
    int x = 5

#ifdef DEBUG
        printf("Debug mode\n");
#else
        printf("Normal mode\n");
#endif