#include <stdio.h>
#define DEBUG

int main()
{


#ifdef DEBUG
        printf("Debug mode\n");
#else
        printf("Normal mode\n");
#endif
}