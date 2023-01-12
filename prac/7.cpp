// A five digit number is taken input from user, write a program to reverse that number and find sum of the digit of its digit too
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
    int  x;
    char x_str[6];
    char x_rev[6];
    int  x_len;
    int  sum=0;

    printf("Enter a 5 digit number: ");
    scanf("%d", &x);

    sprintf(x_str, "%d", x);
    rev_str(x_rev, x_str);
    x_len = strlen(x_str);
    for (int i=0; i<x_len; i++) {
        sum += x_str[i] - 48;
    }

    printf("\nThe reverse of %d is %s, and the sum of its digits is %d", x, x_rev, sum);

    printf("\n");
}
