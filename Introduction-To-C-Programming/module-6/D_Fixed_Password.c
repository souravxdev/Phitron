#include <stdio.h>

int main()
{
    int correcPassword = 1999;
    int givenPassword;
    while (scanf("%d", &givenPassword))  // EOF : End of file
    {

        if (givenPassword == correcPassword)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}