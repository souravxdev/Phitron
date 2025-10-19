#include<stdio.h>

int main(){

    int x = 10; // x এর value 10 set হবে।
    ++x; // আগে x এর increment হয়ে 11 হবে।
    printf("%d\n", x++); // x এর value 11 print হবে তারপর x এর increment হয়ে 12 হবে।
    printf("%d", x); // x এর value 12 print হবে।
    return 0;
}