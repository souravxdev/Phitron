#include<stdio.h>

int main(){

    int taka;
    scanf("%d", &taka);

    if(taka >= 10000){
        printf("Cox's Bazar Jabo!\n");
        if(taka >= 20000){
            printf("St. Martin Jabo!\n");
        }else{
            printf("Cox's Thekei Dhakhay Ferot Jabo!\n");
        }
    } else{
        printf("Kothao Jabo Na!\n");
    }
    return 0;
}