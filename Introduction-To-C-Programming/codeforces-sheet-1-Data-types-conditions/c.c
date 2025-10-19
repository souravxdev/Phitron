// Simple Calculator
// time limit per test1 second
// memory limit per test256 megabytes
// Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.
// Input
// Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).
// Output
// Print 3 lines that contain the following in the same order:
// "X + Y = summation result" without quotes.
// "X * Y = multiplication result" without quotes.
// "X - Y = subtraction result" without quotes.
// Example
// Input
// 5 10
// Output
// 5 + 10 = 15
// 5 * 10 = 50
// 5 - 10 = -5
// Note
// Be careful with spaces.

#include <stdio.h>

int main()
{
    long long int X, Y;
    scanf("%lld %lld", &X, &Y);

    long long int summation, multiplication, subtraction;
    summation = X + Y;
    multiplication = X * Y;
    subtraction = X - Y;
    printf("%lld + %lld = %lld\n", X, Y, summation);
    printf("%lld * %lld = %lld\n", X, Y, multiplication);
    printf("%lld - %lld = %lld\n", X, Y, subtraction);

    return 0;
}