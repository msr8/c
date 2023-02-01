// WAP to find the largest of 3 numbers using conditional operators
#include <stdio.h>


int main() {
    int a,b,c;
    int max;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    max = (a>b) ? ( (a>c) ? a : c) : ( (b>c) ? b : c);

    printf("\nAmong those 3 numbers, %d is the greatest number", max);

    printf("\n");
}