#include<stdio.h>

int main(){
    int taka;
    scanf("%d", &taka);

    if(taka >= 1000){
        printf("I will go to the mall and buy a new phone.\n");
    }
    else if(taka >= 500){
        printf("I will go to the mall and buy some clothes.\n");
    }
    else if(taka >= 200){
        printf("I will go to the mall and buy some food.\n");
    }
    else{
        printf("I will stay at home.\n");
    }
    return 0;
}