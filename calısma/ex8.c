#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    int *p = *p * 2;
    int **pp = &p;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
}
