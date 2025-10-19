// Difference
// time limit per test1 second
// memory limit per test256 megabytes
// Given four numbers A, B, C and D. Print the result of the following equation :
//  X = (A * B) - (C * D).
// Input
// Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).
// Output
// Print "Difference  =  " without quotes followed by the equation result.
// Examples
// Input
// 1 2 3 4
// Output
// Difference = -10
// Input
// 2 3 4 5
// Output
// Difference = -14
// Input
// 4 5 2 3
// Output
// Difference = 14

#include<stdio.h>

int main(){

    long long int A, B, C, D, X;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    X = (A * B) - (C * D);
    printf("Difference = %lld", X);
    return 0;
}