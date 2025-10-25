// N Times | Phitron
// Time Limit: 1 Seconds

// Memory Limit: 2.93 MB

// Statement
// I know and you also know that you love practice day so much.
// So this task is for you.
// You will be given a positive integer N, you need to print "I Love Practice" N times.

// Here positive integer means those integers that are greater than 0.

// Constraints
// 1 <= N <= 1000
// Input format
// You will be given a positive integer N.

// Output Format
// Output "I Love Practice" N times. Don't forget to put a new line after every line.

// Sample Input 1
// 5
// Sample Output 1
// I Love Practice
// I Love Practice
// I Love Practice
// I Love Practice
// I Love Practice
// Sample Input 2
// 2
// Sample Output 2
// I Love Practice
// I Love Practice

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        printf("I Love Practice\n");
    }
    return 0;
}