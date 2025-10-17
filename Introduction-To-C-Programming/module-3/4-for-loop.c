#include<stdio.h>

int main(){
    // for(int i = 4; i <= 100; i += 4){
    //     printf("%d\n", i);
    // }

    // for(int i = 7; i <= 70; i += 7){
    //     printf("%d\n", i);
    // }

    // for(int i = 100; i >= 1; i--){
    //     printf("%d\n", i);
    // }

    // for(int i = 2; i <= 100; i *= 2){
    //     printf("%d\n", i);
    // }

    int i = 2;
    while(i <= 100){
        printf("%d\n", i);
        i *= 2;
    }
    return 0;
}