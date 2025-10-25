#include <stdio.h>

int main()
{

    int taka;
    scanf("%d", &taka);

    if (taka >= 100)
    {
        printf("Burger Khabo!");
    }
    else if (taka >= 50)
    {
        printf("Fuchka Khabo!");
    }
    else if (taka >= 20)
    {
        printf("Chips Khabo!");
    }
    else
    {
        printf("Kichui Khabo Na!");
    }
    return 0;
}