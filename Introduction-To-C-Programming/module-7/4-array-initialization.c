#include <stdio.h>

int main()
{

    int x = 10;          // variable declare and initialization
    int a[5] = {10, 20}; // array declare and initialization
                         // fixed sized array

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]); // 10 20 0 0 0
    }
    return 0;
}