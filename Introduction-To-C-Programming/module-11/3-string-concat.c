#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int lengthOfA = strlen(a);
    int lengthOfB = strlen(b);
    for (int i = 0; i <= lengthOfB; i++)
    {
        a[i+lengthOfA] = b[i];
    }
    printf("%s %s", a, b);
    return 0;
}