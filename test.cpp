#include <stdio.h>
#include <stdlib.h>



// Prints an array
void print_arr(int *arr, int arr_len) {
    printf("[");

    for (int i=0; i<arr_len-1; i++) {
        printf("%d, ", arr[i]);
    }

    printf("%d]\n", arr[arr_len-1]);
}



// Checks if a value is present in a given array
bool check_existence(int val, int* arr, int arr_size) {
    for (int i=0; i<arr_size; i++) {
        if (arr[i] == val) {return true;}
    }
    return false;
}


int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int returnSize) {
    int* arr   = (int*) malloc(returnSize * sizeof(int));
    int  arr_i = 0;
    int  i;

    // Loops thro num1
    for (i=0; i<nums1Size; i++) {
        // If the num exists in both the lists, adds it to arr
        if (check_existence(nums1[i], nums2, nums2Size)) {
            arr[arr_i] = nums1[i];
            arr_i++;
        }
    }

    return arr;
}



int main() {
    int arr1[] = {1,4,5,3,9};
    int arr2[] = {3,5,8,65,71};
    int arr1_size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2_size = sizeof(arr2) / sizeof(arr2[0]);
    int ret_size  = 2;

    int* inter_arr = intersection(arr1, arr1_size, arr2, arr2_size, ret_size);
    print_arr(inter_arr, ret_size);


    printf("\n");
}