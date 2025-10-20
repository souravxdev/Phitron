#include <stdio.h>

int main()
{

    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch < 'z')
    {
        int nextCharacter = (int)ch + 1;
        printf("%c", nextCharacter);
    }
    else if (ch == 'z')
    {
        printf("%c", 'a');
    }
    return 0;
}