#include <stdio.h>


void swap_elems(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void print_arr(int *arr, int arr_len) {
    printf("[");

    for (int i=0; i<arr_len-1; i++) {
        printf("%d, ", arr[i]);
    }

    printf("%d]\n", arr[arr_len-1]);
}



int main() {
    int  arr[]    = {5,3,7,8,1};
    int  arr_len  = sizeof(arr) / sizeof(arr[0]);
    bool to_stop  = false;
    int  boundary = 0;
    int  c        = 1;
    int  i;

    while(!to_stop) {
        to_stop = true;

        for(i=0; i<arr_len-1-boundary; i++) {
            if (arr[i] < arr[i+1]) {
                swap_elems(&arr[i], &arr[i+1]);  // Swaps both the elems
                to_stop = false;                 // Tells the program that we had to swap elems, meaning the list might not be in order yet
            }
        }

        boundary++;
        c++;
    }
    
    printf("\n\nSorted array: ");
    print_arr(arr, arr_len);

    printf("\n");
}

