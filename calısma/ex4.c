#include <stdio.h>

int main(){

    int age;
    printf("yasinizi girin : ");
    scanf("%d",&age);

    if (age >= 18)
    {
        printf("resitsiniz\n");
    
    }else {
        printf("resit degilsiniz\n");
    }
    return 0;

}