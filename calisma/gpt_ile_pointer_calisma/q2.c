#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {4, 2, 9},
        {5, 7, 1}};

    int min, max;

    min = *(*(arr + 0) + 0);
    max = *(*(arr + 0) + 0);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (*(*(arr + i) + j) > max)
                max = *(*(arr + i) + j);
            if (*(*(arr+i)+j)<min)
                min = *(*(arr+iF)+j);   
            }
    }

    printf("Min = %d, Max = %d\n", min, max);
}