// WAP to accept a 4 digit number and display its palindrome
# include <stdio.h>

int main() {
    int  x;
    char x_str[5];

    printf("Enter a 4 digit number: ");
    scanf("%4d", &x);

    sprintf(x_str, "%d", x);
    char pal[5] = { x_str[3], x_str[2], x_str[1], x_str[0], '\0' };

    printf("The palindrome of %d is %s", x, pal);

    printf("\n");
}

