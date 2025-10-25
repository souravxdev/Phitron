#include<stdio.h>

int main(){

    int firstNumber, secondNumber, thirdNumber, sum;

    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    sum = firstNumber + secondNumber + thirdNumber;

    printf("Summation: %d", sum);
    return 0;
}