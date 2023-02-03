// WAP to find maximum and minimum element of array
#include <stdio.h>
#define ARR_LEN 10



int max(int *arr) {
    int res=arr[0];

    for (int i=0; i<ARR_LEN; i++) {
        if (arr[i] > res)    {res = arr[i];}
    }

    return res;
}


int min(int *arr) {
    int res=arr[0];

    for (int i=0; i<ARR_LEN; i++) {
        if (arr[i] < res)    {res = arr[i];}
    }

    return res;
}


int main() {
    int arr[ARR_LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("From the given array, the maximum element is %d\n", max(arr));
    printf("From the given array, the minimum element is %d\n", min(arr));

    printf("\n");
}