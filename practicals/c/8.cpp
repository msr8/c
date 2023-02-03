// WAP to print table of any number entered by the user
#include <stdio.h>


int main() {
    int x;
    int end=10;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\nThe table of %d is:\n", x);
    for (int i=0; i<=end; i++) {
        printf("%d * %d = %d\n", x, i, x*i);
    }

    printf("\n");
}
