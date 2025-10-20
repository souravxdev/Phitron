#include <stdio.h>

int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]\n", i); // printing array with index
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]); // taking input in every index of an array
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]); // printing values of every elements oof an array
    }
    return 0;
}