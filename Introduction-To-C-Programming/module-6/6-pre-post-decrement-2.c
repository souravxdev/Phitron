#include<stdio.h>

int main(){

    int x = 10; // x এর value 10 set হবে।
    --x; // আগে x এর decrement হয়ে 9 হবে।
    printf("%d\n", x--); // x এর value 9 print হবে তারপর x এর decrement হয়ে 8 হবে।
    printf("%d", x); // x এর value 8 print হবে।
    return 0;
}