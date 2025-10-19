// Even Numbers
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
// Input
// Only one line containing a number N (1 ≤ N ≤ 103).
// Output
// Print the answer according to the required above. If there are no even numbers print -1.
// Examples
// Input
// 10
// Output
// 2
// 4
// 6
// 8
// 10
// Input
// 5
// Output
// 2
// 4

#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int flag = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
            flag = 1;
        }
    }
    if(flag == 0){
        printf("-1\n");
    }
    return 0;
}