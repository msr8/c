#include <stdio.h>


int max(int *arr, int n) {
    int res = arr[0];

    for (int i=0; i<n; i++) {
        if (arr[i] > res) {
            res = arr[i];
        }
    }

    return res;
}


int min(int *arr, int n) {
    int res = arr[0];

    for (int i=0; i<n; i++) {
        if (arr[i] < res)    {res = arr[i];}
    }

    return res;
}


int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    printf("From the given array, the maximum element is %d\n", max(arr, n));
    printf("From the given array, the minimum element is %d\n", min(arr, n));

    printf("\n");
}