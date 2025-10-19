#include<stdio.h>

int main(){

    int x = 10;
    // int y = x++; // আগে value বসবে, তারপর increment হবে।
    int y = ++x; // আগে increment হবে, তারপর value বসবে।

    printf("%d %d\n", x, y);

    for(int i = 1; i <= 5; ++i){
        printf("%d\n", i);
    }
    return 0;
}