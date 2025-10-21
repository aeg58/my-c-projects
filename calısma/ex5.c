#include <stdio.h>

int main(void)
{
    int sayilar[5];
    int i, min, max;

    printf("5 sayi girin : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &sayilar[i]);
        toplam += sayilar[i];
    }

    min = sayilar[0];
    max = sayilar[0];

    for (i = 1; i < 5; i++)
    {
        if (sayilar[i] < min)
            min = sayilar[i];
        if (sayilar[i] > max)
            max = sayilar[i];
    }

    printf("En küçük: %d\n", min);
    printf("En büyük: %d\n", max);
}
