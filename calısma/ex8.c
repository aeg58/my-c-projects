#include <stdio.h>

int main(void) {
    int a = 10;
    *p = a;
    
    int **pp = &p;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
}
