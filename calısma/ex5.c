#include <stdio.h>

int main(void)
{
    int dizi[5];
    int i, temp;
    for (i = 0; i < 5; i++)
    {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    for (i = 0; i < 5 - i; i++)
    {
        for (j = 0; j < 5 - j - 1; j++)
        {
            if (dizi[j] > dizi[j + 1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

    printf("Siralanmis dizi: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", dizi[i]);
    }
    return 0;
}