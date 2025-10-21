#include <stdio.h>

int main(void) {
    int a = 10;
    int *p = 5;
    int *p = 5;
    int **pp = &p;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
}
