#include <stdio.h>


int find_i_of_max(int *arr, int arr_len, int start) {
    int ind = start;
    int max = arr[start];

    for(int i=start+1; i<arr_len; i++) {
        if (arr[i] > max) {
            ind = i;
            max = arr[i];
        }
    }

    return ind;
}


void print_arr(int *arr, int arr_len) {
    printf("[");

    for (int i=0; i<arr_len-1; i++) {
        printf("%d, ", arr[i]);
    }

    printf("%d]\n", arr[arr_len-1]);
}

void swap_elems(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}




int main() {
    int arr[]   = {5,3,7,8,1};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    int max_i;

    for (int i=0; i<arr_len; i++) {
        max_i = find_i_of_max(arr, arr_len, i);       // Gets index of max elem in the unsorted part of the array
        swap_elems(&arr[i], &arr[max_i]);             // Swaps the max elem (from the unsorted part) and the first elem of the unsorted part
    }

    printf("\n\nSorted array: ");
    print_arr(arr, arr_len);

    printf("\n");
}