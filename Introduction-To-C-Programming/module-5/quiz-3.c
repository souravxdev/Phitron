#include<stdio.h>

int main(){

    int x = 4;
    if (x % 2 != 0)
    {
        printf("Odd ");
    }
    else
    {
        printf("Even ");
    }
    if (x > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negative");
    }
    return 0;
}