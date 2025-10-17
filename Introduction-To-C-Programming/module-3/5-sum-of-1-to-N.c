#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int sum = 0; // if we don't initialize sum, it may contain garbage value
    // for(int i = 1; i <= n; i++){
    //     // sum = sum + i;
    //     sum += i;
    //     printf("%d %d\n", i, sum);
    // }

    int i = 1;
    while(i <= n){
        sum += i;
        // printf("%d %d\n", i, sum);
        i++;
    }

    printf("%d", sum);
    return 0;
}