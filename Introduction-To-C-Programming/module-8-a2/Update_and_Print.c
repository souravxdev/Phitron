#include <stdio.h>

int main()
{

    int N, X, V, i;
    scanf("%d", &N);
    int A[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    scanf("%d %d", &X, &V);
    A[X] = V;

    for(i = N - 1; i >= 0; i--){
        printf("%d ", A[i]);
    }

    return 0;
}