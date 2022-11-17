// WAP to find if a number is even or not
# include <stdio.h>

int main() {
    int  x;
    bool is_even;

    printf("\n\n_2(): Enter a number: ");
    scanf("%d", &x);

    is_even = x%2 == 0;

    printf("_2(): %d is ", x);
    is_even ? printf("an") : printf("not a");
    printf(" even number");

    printf("\n");
}


