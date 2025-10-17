#include<stdio.h>

int main(){

    int a = 10;
    int b = 20;
    int sum = a + b; // Addition
    printf("Summation: %d\n", sum);

    int diff = b - a; // Subtraction
    printf("Subtraction: %d\n", diff);

    int prod = a * b; // Multiplication
    printf("Multiplication: %d\n", prod);

    int quot = b / a; // Division
    printf("Division: %d\n", quot);

    int mod = b % a; // Modulus : Remainder of division
    printf("Remainder: %d\n", mod);

    return 0;
}