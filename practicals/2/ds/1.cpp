#include <stdio.h>
#include <stdlib.h>


int max(int *arr, int arr_len) {
    int res = arr[0];

    for (int i=0; i<arr_len; i++) {
        if (arr[i] > res)    {res = arr[i];}
    }

    return res;
}



int main() {
    int n;
    int *arr;
    int i;

    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    printf("\n");
    for(i=0; i<n; i++) {
        printf("Enter integer number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("From the given array, the largest element is %d\n", max(arr, n));

    printf("\n");
}