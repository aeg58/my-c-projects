#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    printf("Enter 5 numbers \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("------------------------------\n");

    printf("arr     = %p\n", arr);
    printf("&arr[0] = %p\n", &arr[0]);
    printf("&arr    = %p\n", &arr);
    printf("------------------------------\n");
    printf("arr + 1     = %p\n", arr + 1);
    printf("&arr[0] + 1 = %p\n", &arr[0] + 1);
    printf("&arr + 1    = %p\n", &arr + 1);

    return 0;
}