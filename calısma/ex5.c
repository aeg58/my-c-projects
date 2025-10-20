#include <stdio.h>

int main(){
    int not,toplam =0;
    int ort;
    int i;

    for ( i = 1; i <= 5; i++)
    {
        printf("%d. notu gir : ",i);
        scanf("%d",&not);
        toplam += not;

    }

    ort = (float)toplam/5;

    printf("\nOrtalama : %.2f\n",ort);

    switch (ort/10)
    {
    case 10:
        case 9:
            printf("Harf notu: A\n");
            break;
        case 8:
            printf("Harf notu: B\n");
            break;
        case 7:
            printf("Harf notu: C\n");
            break;
        case 6:
            printf("Harf notu: D\n");
            break;
        default:
            printf("Harf notu: F\n");
            break;
    
    }

    
}