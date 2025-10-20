// Take an array from input and count how many odd numbers are present in that array.
#include <stdio.h>

int main()
{

    int n, count = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}