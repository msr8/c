// WAP to print a string in reverse using a pointer
#include <stdio.h>
#include <string.h>


void print_in_rev(char *x) {
    int x_len = strlen(x);
    
    for (int i=x_len-1; i>=0; i--) {
        printf("%c", x[i]);
    }
}


int main() {
    char x[100];

    printf("Enter a string: ");
    scanf("%s", x);

    printf("\nThe reverse of %s is ", x);
    print_in_rev(x);

    printf("\n");
}