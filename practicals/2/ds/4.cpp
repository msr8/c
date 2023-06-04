#include <stdio.h>

#define MAX_SIZE 100

void deleteElement(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty. Deletion not possible.\n");
        return;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position. Deletion not possible.\n");
        return;
    }

    // Shift elements to the left to overwrite the element to be deleted
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;

    printf("Element at position %d deleted successfully.\n", position);
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;
    int position;

    printf("Enter the position of the element to delete (0-%d): ", size - 1);
    scanf("%d", &position);

    deleteElement(arr, &size, position);

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}
