#include <stdio.h>

int main()
{

    char s[1000001];
    fgets(s, 1000001, stdin);

    int i = 0;
    while(s[i] != '\\'){
        printf("%c", s[i]);
        i++;
    }

    // for (int i = 0; s[i] != '\\'; i++)
    // {
    //     printf("%c", s[i]);
    // }
    return 0;
}