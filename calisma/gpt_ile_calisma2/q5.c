#include <stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};
    int i,temp;

    for ( i = 0; i < 5; i++)
    {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    for ( i = 0; i < 5; i++)
    {           
        printf("%d\n",arr[i]);
    }
    
}