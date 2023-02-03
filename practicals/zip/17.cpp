// Write a program to calculate factorial of a number using recursive function
#include <stdio.h>


int fact(int x) {
    if   (x==1)    {return 1;}
    else           {return x * fact(x-1);}
}


int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("\n%d! is %d", x, fact(x));

    printf("\n");
}