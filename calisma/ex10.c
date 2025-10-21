#include <stdio.h>

void ikiKatla(int *dizi,int n){
    for(int i = 0; i < n; i++){
        dizi[i] = dizi[i] * 2;
    }
}

int main(void){
    int sayilar[5] = {1, 2, 3, 4, 5};
    ikiKatla(sayilar, 5);

    printf("Iki katlanmis sayilar: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", sayilar[i]);
    }   
    printf("\n");
    return 0;

}