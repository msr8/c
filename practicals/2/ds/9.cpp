#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Key found at mid index
        }
        else if (arr[mid] < key) {
            return binarySearchRecursive(arr, mid + 1, high, key); // Search in the right half
        }
        else {
            return binarySearchRecursive(arr, low, mid - 1, key); // Search in the left half
        }
    }

    return -1; // Key not found
}

int binarySearch(int arr[], int size, int key) {
    return binarySearchRecursive(arr, 0, size - 1, key);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);

    int index = binarySearch(arr, size, key);

    if (index != -1) {
        printf("Key %d found at index %d.\n", key, index);
    } else {
        printf("Key %d not found in the array.\n", key);
    }

    printf("\n");
}
