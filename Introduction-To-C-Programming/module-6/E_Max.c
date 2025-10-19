#include <stdio.h>
#include<limits.h>

int main()
{
    int n, max = INT_MIN;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d", max);
    return 0;
}