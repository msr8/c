// A character is entered through keyboard, WAP to determine whether the character is entered capital, small, digit or special character
#include <stdio.h>


int main() {
    char x;
    char res[18];

    printf("Enter a character: ");
    scanf(" %c", &x);

    printf("%c is a ", x);
    // a(97) to z(122)
    if (x>=97 and x<=122)        {printf("small letter");}
    // A(65) to Z(90)
    else if (x>=65 and x<=90)    {printf("capital letter");}
    // 1(49) to 9(57)
    else if (x>=49 and x<=57)    {printf("digit");}
    // Special Digit
    else                         {printf("special chatacter");}

    printf("\n");
}