// Char
// time limit per test0.25 seconds
// memory limit per test64 megabytes
// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
// Note : difference between 'a' and 'A' in ASCII is 32 .
// Input
// Only one line containing a character X which will be a capital or small letter.
// Output
// Print the answer to this problem.
// Examples
// InputCopy
// a
// OutputCopy
// A
// InputCopy
// A
// OutputCopy
// a


// #include<stdio.h>

// int main(){

//     char X;
//     scanf("%c", &X);
//     if(X >= 'a' && X <= 'z'){
//         // lowercase to uppercase
//         char upper = X - 32;
//         printf("%c\n", upper);
//     } else {
//         // uppercase to lowercase
//         char lower = X + 32;
//         printf("%c\n", lower);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);
    int asciiValue = (int)ch;
    int convertedToCapitalAscii = asciiValue - 32;
    int convertedToSmallAscii = asciiValue + 32;
    if(asciiValue >= 65 && asciiValue <= 90){
        printf("%c\n", (char)convertedToSmallAscii);
    } else if(asciiValue >= 97 && asciiValue <= 122){
        printf("%c\n", (char)convertedToCapitalAscii);
    } 
    return 0;
}