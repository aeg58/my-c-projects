# include <stdio.h>

int main(){
    int arr[5];
    int i;
    printf("Enter 5 numbers \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("------------------------------\n");

   for (i = 0; i < 5; i++) {
    printf("Address of arr[%d] = %p, Value = %d\n", i, &arr[i], arr[i]);
}
    return 0;
    
}