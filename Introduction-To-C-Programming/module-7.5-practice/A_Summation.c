#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N;
    long long int sum = 0; 
    scanf("%d", &N);
    long long int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    long long int absoluteSum = llabs(sum);
    printf("%lld", absoluteSum);
    return 0;
}