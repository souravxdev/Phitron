#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, X, found = 0;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    scanf("%d", &X);

    for (int i = 0; i < N; i++)
    {
        if(A[i] == X){
            printf("%d", i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
    
    return 0;
}