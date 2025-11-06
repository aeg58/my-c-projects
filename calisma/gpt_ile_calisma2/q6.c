#include <stdio.h>

int main(){
    int arr[5] = {1,2,0,9,5};
    int i,min,max;

    min = arr[0];
    max = arr[0];

    for ( i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]< min)
        {
            min = arr[i];
        }

        
    
        
    }
    printf("Min = %d, Max = %d\n", min, max);
}