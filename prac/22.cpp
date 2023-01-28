// Write a program in C to find the largest element in an array using dynamic memory allocation (malloc() and free() functions)
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    int *arr;
    int i;

    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    printf("\n");
    for(i=0; i<n; i++) {
        printf("Enter integer number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
}