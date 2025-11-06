#include <stdio.h>

int main(){

    int arr[5] = {3,5,7,9,1};
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("ptr + %d = %p  →  *(ptr + %d) = %d\n",
           i, (ptr + i), i, *(ptr + i));
    }
    
}
