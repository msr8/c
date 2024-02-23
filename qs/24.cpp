// WAP to find if a character is a digit or not
# include <stdio.h>

int main() {
    char x;
    int  x_int;
    bool is_dig;

    printf("\n\nEnter a character: ");
    scanf("%c", &x);

    x_int  = x;
    is_dig = x_int>=48 && x_int<=57;

    printf("%c is", x);
    is_dig ? printf("") : printf(" not");
    printf(" a digit");

    printf("\n");
}


