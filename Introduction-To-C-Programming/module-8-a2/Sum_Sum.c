#include <stdio.h>

int main()
{

    int N, sumOfPositive = 0, sumOfNegative = 0, i;
    scanf("%d", &N);
    int V;

    for (i = 0; i < N; i++) {
        scanf("%d", &V);
        if (V > 0)
            sumOfPositive += V;
        else if (V < 0)
            sumOfNegative += V;
    }

    printf("%d %d", sumOfPositive, sumOfNegative);

    return 0;
}