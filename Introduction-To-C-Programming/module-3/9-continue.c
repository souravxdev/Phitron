#include<stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){
        if(i == 5){
            continue; // when i is 5, loop will skip thie value
        }
        printf("%d\n", i);
    }
    return 0;
}