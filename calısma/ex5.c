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
    
    
}