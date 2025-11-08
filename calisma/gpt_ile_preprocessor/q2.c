#include <stdio.h>
#define VERSION 2

#ifdef vERSION
    printf("This is Version 2 of the program\n");
#else
    printf("This is Version 1 of the program\n");
#endif
