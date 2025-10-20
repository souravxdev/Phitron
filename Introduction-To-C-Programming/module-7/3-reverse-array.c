#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n]; // variable sized array

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]); // printing array in reverse
    }
    return 0;
}