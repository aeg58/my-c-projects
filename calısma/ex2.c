#include <stdio.h>

int main(){
    int age;
    float height;
    char initial;

    printf("enter your age ");
    scanf("%d",&age);

    printf("enter your height ");
    scanf("%f",&height);

    printf("Enter your initial: ");
    scanf(" %c", &initial);

    printf("\n You entered : \n");
    printf("Age : %d\n",age);
    printf("height : %.2f m \n",height);
    printf("initial  : %c \n ",initial);

    
    return 0;

}