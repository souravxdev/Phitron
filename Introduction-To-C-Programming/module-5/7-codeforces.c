// Max and Min
// time limit per test0.25 seconds
// memory limit per test64 megabytes
// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
// Input
// Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)
// Output
// Print the minimum number followed by a single space then print the maximum number.
// Examples
// Input
// 1 2 3
// Output
// 1 3
// Input
// -1 -2 -3
// Output
// -3 -1
// Input
// 10 20 -5
// Output
// -5 20


#include<stdio.h>

int main(){

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if(A<=B && A<=C){
        printf("%d ", A);
        if(B>=C){
            printf("%d", B);
        }
        else{
            printf("%d", C);
        }
    }
    else if(B<=A && B<=C){
        printf("%d ", B);
        if(A>=C){
            printf("%d", A);
        }
        else{
            printf("%d", C);
        }
    }
    else if(C<=A && C<=B){
        printf("%d ", C);
        if(A>=B){
            printf("%d", A);
        }
        else{
            printf("%d", B);
        }
    }

    return 0;
}