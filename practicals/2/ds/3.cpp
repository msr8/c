#include <stdio.h>

#define MAX_SIZE 100

void insertElement(int arr[], int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Array is full. Insertion not possible.\n");
        return;
    }

    if (position < 0 || position > *size) {
        printf("Invalid position. Insertion not possible.\n");
        return;
    }

    // Shift elements to the right to create space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;
    (*size)++;

    printf("Element %d inserted successfully at position %d.\n", element, position);
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;
    int element, position;

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert at (0-%d): ", size);
    scanf("%d", &position);

    insertElement(arr, &size, element, position);

    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
