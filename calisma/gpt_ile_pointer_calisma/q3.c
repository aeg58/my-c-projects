#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {4, 2, 9},
        {5, 7, 1}};

          for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Address of arr[%d][%d] = %p  |  Value = %d\n",
                   i, j, (*(arr + i) + j), *(*(arr + i) + j));
        }
    }
}