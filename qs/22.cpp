// WAP to find if a number is even or not
# include <stdio.h>

int main() {
    int  x;
    bool is_even;

    printf("\n\nEnter a number: ");
    scanf("%d", &x);

    is_even = x%2 == 0;

    printf("%d is ", x);
    is_even ? printf("an") : printf("not a");
    printf(" even number");

    printf("\n");
}


