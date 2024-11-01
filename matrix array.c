#include <stdio.h>

int main() 
{
    int i, j;
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        for (j = 0; j < sizeof(arr[0])/sizeof(int); j++) 
        {
            int sum = arr[i][j];
            printf("%i\n", arr[i][j]);
        }
    }
    return 0;
}