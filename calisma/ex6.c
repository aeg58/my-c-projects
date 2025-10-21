#include <stdio.h>

void yazdir(int dizi[], int boyut){
 int i;
 printf("Dizi elemanlari: ");
 for ( i = 0; i < boyut; i++)
 {
    printf("%d ", dizi[i]);
 }
 printf("\n");
}
int main(){
    int sayilar[5];


    printf("Lutfen 5 sayi giriniz:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &sayilar[i]);
    }

    yazdir(sayilar, 5);
    return 0;
    
}