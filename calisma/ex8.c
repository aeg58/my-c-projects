#include <stdio.h>

int main(void)
{
    int sayilar[5] = {10, 20, 30, 40, 50};
    int *p = sayilar; 

    printf("sayilar[0] = %d\n", sayilar[0]);
    printf("*p = %d\n", *p);
    printf("*(p+1) = %d\n", *(p + 1));
    printf("*(p+2) = %d\n", *(p + 2));



    return 0;
}
