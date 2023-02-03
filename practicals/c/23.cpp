// WAP to check if a given word is a palindrome or not
#include <stdio.h>
#include <string.h>


void rev_str(char *dest, char *source) {
    int i;
    int src_len;

    src_len = strlen(source);
    for (i=0; i<src_len; i++) {
        dest[src_len-i-1] = source[i];
    }
    dest[src_len] = '\0';
}


int main() {
    char x[100];
    char x_rev[100];

    printf("Enter a word: ");
    scanf("%s", x);

    rev_str(x_rev, x);

    if (strcmp(x, x_rev) == 0) {
        printf("\n%s is a palindrome", x);
    }
    else {
        printf("\n%s is not a palindrome", x);
    }

    printf("\n");
}