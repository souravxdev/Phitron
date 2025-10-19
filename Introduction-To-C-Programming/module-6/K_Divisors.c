#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int divisor = n % i;
        if (divisor == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}