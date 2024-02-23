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

    // Prints unsorted array
    printf("0: "); print_arr(arr, arr_len);
    printf("\n\n");

    for (int i=0; i<arr_len; i++) {
        max_i = find_i_of_max(arr, arr_len, i);       // Gets idex of max elem in the unsorted part of the array
        swap_elems(&arr[i], &arr[max_i]);             // Swaps the max elem (from the unsorted part) and the first elem of the unsorted part
        printf("%d: ", i+1); print_arr(arr, arr_len); // Prints arr at current phase
    }

    printf("\n");
}





// Selection sort is a simple sorting algorithm that repeatedly finds the minimum element from the unsorted part of \
// the list and places it at the beginning of the list, which forms the sorted part of the list. The algorithm divides \
// the list into two parts: the sorted part and the unsorted part. Initially, the sorted part is empty and the unsorted \
// part contains all the elements of the list.

// The algorithm works as follows:

// 1) Find the smallest element in the unsorted part of the list
// 2) Swap the smallest element with the first element of the unsorted part
// 3) Move the boundary of the sorted part one element to the right
// 4) Repeat steps 1-3 until the entire list is sorted.

// The algorithm has a time complexity of O(n^2) in the worst case scenario, which makes it inefficient for large lists. \
// However, it has the advantage of being easy to understand and implement
