// WAP to find if a character is capital or not
# include <stdio.h>

int main() {
    char x;
    int  x_int;
    bool is_cap;

    printf("\n\n_3(): Enter a character: ");
    scanf("%c", &x);

    x_int  = x;
    is_cap = x_int>=65 && x_int<=90;

    printf("_3(): %c is", x);
    is_cap ? printf("") : printf(" not");
    printf(" a capital character");

    printf("\n");
}


