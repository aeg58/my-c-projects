#include <stdio.h>

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a; 
    int sum = 0;

    while (p<a+5)
    {
        sum += *p;
        p++;
    }

    printf("Toplam: %d\n", sum);




    return 0;
}
