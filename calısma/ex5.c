#include <stdio.h>

int main(){
    int not,toplam =0;
    float ort;
    int i;

    for ( i = 0; i <= 5; i++)
    {
        printf("%d. notu gir : ",i);
        scanf("%d"),not;
        toplam += not;

    }

    ort = (float)toplam/5;

    printf("\nOrtalama : %.2f\n",ort);

    switch (ort)
    {
    case constant expression:
        /* code */
        break;
    
    default:
        break;
    }

    
}