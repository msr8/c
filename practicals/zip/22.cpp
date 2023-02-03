// Write a program in C to find the largest element in an array using dynamic memory allocation (malloc() and free() functions)
#include <stdio.h>
#include <stdlib.h>


int max(int *arr, int arr_len) {
    int res = arr[0];

    for (int i=0; i<arr_len; i++) {
        if (arr[i] > res)    {res = arr[i];}
    }

    return res;
}


int min(int *arr, int arr_len) {
    int res     = arr[0];

    for (int i=0; i<arr_len; i++) {
        if (arr[i] < res)    {res = arr[i];}
    }

    return res;
}



int main() {
    int n;
    int *arr;
    int i;
    int max_elem;
    int min_elem;

    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    printf("\n");
    for(i=0; i<n; i++) {
        printf("Enter integer number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("From the given array, the maximum element is %d\n", max(arr, n));
    printf("From the given array, the minimum element is %d\n", min(arr, n));

    printf("\n");
}