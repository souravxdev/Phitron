#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, found = 0;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int min = A[0];
    int position = 1;

    for (int i = 0; i < N; i++)
    {
        if(A[i] < min){
            min = A[i];
            position = i + 1;
        }
        
    }
    printf("%d %d", min, position);
    
    return 0;
}