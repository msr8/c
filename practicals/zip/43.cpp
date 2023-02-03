// WAP in C to show the use of calloc() and realloc() functions
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int*) calloc(n, sizeof(int));
    printf("\narr can currently store %d integers\n\n", n);
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int*) realloc(arr, n*sizeof(int));
    printf("\narr can currently store %d integers\n\n", n);

    printf("\n");
}