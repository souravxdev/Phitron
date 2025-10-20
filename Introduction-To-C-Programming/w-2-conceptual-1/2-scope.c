#include <stdio.h>

int x = 99;
int main()
{

    int a = 10;

    if (a % 2 == 0)
    {
        int b = 6;
        printf("%d %d %d\n", a, b, x); // can be print both a, b and x because a is declared in upper local scope and b is declared in local local scope, and x is declared in global scope.
    }
    else
    {
        int b = 7;
        printf("%d %d %d", a, b, x); // can be print both a, b and x because a is declared in upper scope and b is declared in local local scope, and x is declared in global scope.
    }

    printf("Outside: %d\n", a); // can print a because a is declared in local scope.
    // printf("Outside: %d", b); // can't print because b is declared in inner local scope.
    printf("Outside: %d", x); // can print because x is declared in global scope.
    return 0;
}

// inner block এ কোন variable declare করলে outer block এ সেই variable এর access পাওয়া যায় না।
// outer block এ কোন variable declare করলে inner block এ সেই variable এর access পাওয়া যায় ন।