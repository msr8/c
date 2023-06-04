#include <stdio.h>


int linear_search(int *arr, int arr_len, int val) {
    for (int i=0; i<arr_len; i++) {
        if (arr[i] == val) {return i;}
    }

    return -1;
}



int main() {
    int arr[] = {5,3,7,8,1,89,76,95};
    int arr_len = sizeof(arr) / sizeof(arr[0]);

    printf("%d", linear_search(arr, arr_len, 89));

    printf("\n");
}