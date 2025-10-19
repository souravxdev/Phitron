#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int positive = 0, negative = 0, even = 0, odd = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x > 0 && x % 2 == 0)
        {
            positive++;
            even++;
        }
        else if (x > 0 && x % 2 != 0)
        {
            positive++; 
            odd++;
        }
        else if (x < 0 && x % 2 == 0)
        {
            negative++;
            even++;
        }
        else if (x < 0 && x % 2 != 0)
        {
            negative++;
            odd++;
        }
        else if (x == 0)
        {
            even++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}