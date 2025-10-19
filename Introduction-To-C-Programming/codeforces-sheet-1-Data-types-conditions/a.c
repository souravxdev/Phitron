// Say Hello With C++
// time limit per test1 second
// memory limit per test256 megabytes
// Given a name S. Print "Hello, (name)" without parentheses.
// Input
// Only one line containing a string S.
// Output
// Print "Hello, " without quotes, then print name.
// Example
// Input
// programmer
// Output
// Hello, programmer

#include <stdio.h>

int main()
{
    char name[100];
    scanf("%s", name);
    printf("Hello, %s\n", name);
    return 0;
}