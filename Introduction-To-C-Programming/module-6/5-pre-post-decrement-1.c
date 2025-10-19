#include<stdio.h>

int main(){

    int x = 10;  // x এর value 10 set হবে।
    int y = x--; // আগে x এর value 10, y এ বসবে, তারপর x decrement হয়ে 9 হবে।
    int z = --y; // আগে y এর decrement হয়ে 9 হবে, তারপর y এর value z এ বসবে।

    printf("%d\n", z--); // z এর value 9 print হবে, তারপর z এর decrement হয়ে 8 হবে।
    printf("%d", z); // z এর value print 8 হবে।
    return 0;
}