#include<stdio.h>

int main(){

    int firstNumber, secondNumber, thirdNumber, sum, avarage;

    scanf("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    sum = firstNumber + secondNumber + thirdNumber;

    avarage = sum / 3;

    printf("Avarage: %d", avarage);
    return 0;
}