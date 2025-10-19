#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        long long int factorial = 1;
        scanf("%d", &n);

        for (int j = 1; j <= n; j++)
        {
            factorial = factorial * j;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}