#include<stdio.h>

int main(){

    int x = 10;  // x এর value 10 set হবে।
    int y = x++; // আগে x এর value 10, y এ বসবে, তারপর x increment হয়ে 11 হবে।
    int z = ++y; // আগে y এর increment হয়ে 11 হবে, তারপর y এর value z এ বসবে।

    printf("%d\n", z++); // z এর value print হবে, তারপর z এর increment হয়ে 12 হবে।
    printf("%d", z); // z এর value print 12 হবে।
    return 0;
}