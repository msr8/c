#include <stdio.h>


// arr MUST have the last element empty, and thus arr_len must be +1 of actual length
void insert(int *arr, int arr_len, int ind, int val) {
    for (int i=arr_len-1; i>ind; i--) {
        arr[i] = arr[i-1];
    }
    arr[ind] = val;
}


void del(int *arr, int arr_len, int ind){
    for (int i=ind; i<arr_len-1; i++) {
        arr[i] = arr[i+1];
    }
    arr[arr_len-1] = NULL;
}





void print_arr(int *arr, int arr_len) {
    printf("[");

    for (int i=0; i<arr_len-1; i++) {
        printf("%d, ", arr[i]);
    }

    printf("%d]\n", arr[arr_len-1]);
}


int main() {
    int arr[6] = {1,5,6,3,4,3};
    //            0 1 2 3 4 5
    int val = 9;
    int ind = 3;
    int arr_len = sizeof(arr)/sizeof(arr[0]);

    // insert(arr, arr_len, ind, val);
    del(arr, arr_len, ind);
    print_arr(arr, arr_len);

    printf("\n");
}

