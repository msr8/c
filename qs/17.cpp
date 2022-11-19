// WAP to accept in in smallcase, convert it to uppercase, and display the ASCII values of both the cases
# include <stdio.h>

int main() {
    char x;
    char x_up;

    printf("Enter an alphabet in small case: ");
    scanf("%c", &x);

    x_up = x - 32;

    printf("\nLowercase: %c (%d)", x,    x);
    printf("\nUppercase: %c (%d)", x_up, x_up);

    printf("\n");
}

