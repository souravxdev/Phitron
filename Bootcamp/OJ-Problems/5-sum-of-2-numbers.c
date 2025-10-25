// Sum of Two Numbers
// Time Limit: 1 Seconds

// Memory Limit: 2.93 MB

// Statement
// Take two integers A and B as input and output their summation.

// Constraints
//  -10^9 <= A,B <= 10^9
// Input format
// - You will be given A and B separated by a space.

// Output Format
// Output their summation

// Sample Input 1
// 2 3
// Sample Output 1
// 5
// Sample Input 2
// -10 5
// Sample Output 2
// -5

#include<stdio.h>

int main(){

    int A, B, sum;
    scanf("%d %d", &A, &B);

    sum = A + B;
    printf("%d", sum);

    return 0;
}