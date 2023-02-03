// Create a union union Data (int i, float f, char str[20]). WAP to show how to access and print members of union and also print the maximum memory occupied by union members
#include <stdio.h>


union Data {
    int   i;
    float f;
    char  str[20];
};


int main() {
    union Data x;

    printf("Enter a number: ");
    scanf("%d", &x.i);
    printf("Value currently stored in union: %d", x.i);

    printf("\n\nEnter a float: ");
    scanf("%f", &x.f);
    printf("Value currently stored in union: %f", x.f);

    printf("\n\nEnter a string: ");
    scanf("%s", x.str);
    printf("Value currently stored in union: %s", x.str);

    printf("\n");
}