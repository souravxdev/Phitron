#include<stdio.h>

int main(){
    int taka;
    scanf("%d", &taka);
    if(taka >= 100){
        printf("I will go to the mall.\n");
    }
    else{
        printf("I will stay at home.\n");
    }
    return 0;
}