#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            A[i] = 1;
        }
        else if (A[i] < 0)
        {
            A[i] = 2;
        }
        printf("%d ", A[i]);
    }
    return 0;
}