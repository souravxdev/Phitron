#include <stdio.h>

int main()
{

    int n, res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        res = n * i;
        printf("%d * %d = %d\n", n, i, res);
    }
    return 0;
}