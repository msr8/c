// WAP to count the number of vowels and consonants in a string using a pointer
#include <stdio.h>
#include <string.h>


void count_vowels_constants(char *x, int *vowels, int *consonants) {
    int x_len = strlen(x);
    int ch;
    *vowels     = 0;
    *consonants = 0;

    for (int i=0; i<x_len; i++) {
        ch = x[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            *vowels = *vowels+1;
        }
        else {
            *consonants = *consonants+1;
        }
    }
}

int main() {
    char x[100];
    int  vowels;
    int  consonants;

    printf("Enter a string: ");
    scanf("%s", x);

    count_vowels_constants(x, &vowels, &consonants);

    printf("\n%s contains %d vowels and %d consonants", x, vowels, consonants);

    printf("\n");
}