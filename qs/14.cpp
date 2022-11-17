// WAP to find if a character is a digit or not
# include <stdio.h>

int main() {
    char x;
    int  x_int;
    bool is_dig;

    printf("\n\n_4(): Enter a character: ");
    scanf("%c", &x);

    x_int   = x;
    is_dig = x_int>=48 && x_int<=57;

    printf("_4(): %c is", x);
    is_dig ? printf("") : printf(" not");
    printf(" a digit");

    printf("\n");
}


