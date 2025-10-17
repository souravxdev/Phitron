#include <stdio.h>

int main(){
    int a = 10000000000;
    printf("%d", a);

    long long int b = 10000000000;
    printf("\n%lld", b);

    float f = 2134.35678678979;
    printf("\n%f", f);

    double d = 2134.35678678979;
    printf("\n%.15lf", d);
    return 0;
}

// int can store upto 10^9 sized values. If we try to store a value greater than that, it will give garbage value.
// long long int can store upto 10^18 sized values. So, we should use long long int if we want to store a value greater than 10^9.

// float can store upto 7 decimal places accurately. If we try to store a value with more than 7 decimal places, it will give garbage value after 7th decimal place.
// For more accuracy, we should use double which can store upto 15 decimal places accurately.