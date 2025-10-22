#include<stdio.h>

int main(){

    char s[50];
    // scanf("%s", s); // scanf() space সহ input নিতে পারে না।
    // gets(s);
    fgets(s,17,stdin);
    printf("%s\n", s);
    return 0;
}