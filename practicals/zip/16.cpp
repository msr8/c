// Write a program in C to swap elements using call by reference
#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping:\n");
    printf("a: %d    b: %d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping:\n");
    printf("a: %d    b: %d", a, b);

    printf("\n");
}