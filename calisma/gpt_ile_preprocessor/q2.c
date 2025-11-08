#include <stdio.h>
#define VERSIO

int main(void) {
#ifdef VERSION
    printf("This is Version 2 of the program\n");
#else
    printf("This is Version 1 of the program\n");
#endif
    return 0;
}
