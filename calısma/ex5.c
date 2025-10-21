#include <stdio.h>

int main(void)
{
    int sayilar[5];
    int i, toplam = 0;
    float ort;

    printf("5 sayi girin : \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&sayilar[i]);
        toplam += sayilar[i];
    }

    
}
