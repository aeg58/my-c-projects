#include <stdio.h>

int main(){
    int toplam = 0,sayi;

    while ("condition")
    {
        printf("enter a number : ");
        scanf("%d",&sayi);
        if (sayi==0)
        break;

        toplam+=sayi;
        

    }

    printf("Toplam : %d\n",toplam);
    return 0;
    
    
}