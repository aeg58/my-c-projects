#include <stdio.h>

int main(void) {
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("a değeri: %d\n", a);
    printf("a adresi: %p\n", &a);
}
