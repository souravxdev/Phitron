#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i); // scope
    }
    printf("%d", i);
    return 0;
}