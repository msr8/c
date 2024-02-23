





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q1) WAP to Find the largest element in an array using functions</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>


int max(int *arr, int arr_len) {
    int res = arr[0];

    for (int i=0; i<arr_len; i++) {
        if (arr[i] > res)    {res = arr[i];}
    }

    return res;
}



int main() {
    int n;
    int *arr;
    int i;

    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    printf("\n");
    for(i=0; i<n; i++) {
        printf("Enter integer number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("From the given array, the largest element is %d\n", max(arr, n));

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/1.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q2) WAP to Find the smallest element in an array using functions</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>


int min(int *arr, int arr_len) {
    int res = arr[0];

    for (int i=0; i<arr_len; i++) {
        if (arr[i] < res)    {res = arr[i];}
    }

    return res;
}



int main() {
    int n;
    int *arr;
    int i;

    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    arr = (int*) calloc(n, sizeof(int));
    printf("\n");
    for(i=0; i<n; i++) {
        printf("Enter integer number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("From the given array, the smallest element is %d\n", min(arr, n));

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/2.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q3) WAP to Insert an element at a particular location in an existing array</p>

<br>

```cpp
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
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/3.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q4) WAP to Delete an element from a particular location in an existing array</p>

<br>

```cpp
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
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/4.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q5) WAP to Reverse the contents of an array using function</p>

<br>

```cpp
#include <stdio.h>

#define MAX_SIZE 100

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start towards the center
        start++;

        // Move end towards the center
        end--;
    }
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/5.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q6) WAP to Multiply 2 Matrices with following conditions- <br>Create the matrices dynamically (using malloc)<br>Create a function to read the elements in matrix<br>Create a function to print the elements of matrix<br>Create a function to multiply the elements of matrices</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int rows;
    int cols;
    int** data;
} Matrix;

Matrix createMatrix(int rows, int cols) {
    Matrix matrix;
    matrix.rows = rows;
    matrix.cols = cols;

    // Allocate memory for matrix data
    matrix.data = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix.data[i] = (int*)malloc(cols * sizeof(int));
    }

    return matrix;
}

void readMatrix(Matrix* matrix) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < matrix->rows; i++) {
        for (int j = 0; j < matrix->cols; j++) {
            scanf("%d", &matrix->data[i][j]);
        }
    }
}

void printMatrix(Matrix matrix) {
    printf("Matrix:\n");
    for (int i = 0; i < matrix.rows; i++) {
        for (int j = 0; j < matrix.cols; j++) {
            printf("%d ", matrix.data[i][j]);
        }
        printf("\n");
    }
}

Matrix multiplyMatrices(Matrix matrix1, Matrix matrix2) {
    Matrix result;
    result.rows = matrix1.rows;
    result.cols = matrix2.cols;

    // Allocate memory for result matrix data
    result.data = (int**)malloc(result.rows * sizeof(int*));
    for (int i = 0; i < result.rows; i++) {
        result.data[i] = (int*)malloc(result.cols * sizeof(int));
    }

    // Perform matrix multiplication
    for (int i = 0; i < matrix1.rows; i++) {
        for (int j = 0; j < matrix2.cols; j++) {
            result.data[i][j] = 0;
            for (int k = 0; k < matrix1.cols; k++) {
                result.data[i][j] += matrix1.data[i][k] * matrix2.data[k][j];
            }
        }
    }

    return result;
}

void freeMatrix(Matrix* matrix) {
    for (int i = 0; i < matrix->rows; i++) {
        free(matrix->data[i]);
    }
    free(matrix->data);
}

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Invalid dimensions for matrix multiplication.\n");
        return 0;
    }

    Matrix matrix1 = createMatrix(rows1, cols1);
    Matrix matrix2 = createMatrix(rows2, cols2);

    printf("Matrix 1:\n");
    readMatrix(&matrix1);

    printf("Matrix 2:\n");
    readMatrix(&matrix2);

    printf("Matrix 1:\n");
    printMatrix(matrix1);

    printf("Matrix 2:\n");
    printMatrix(matrix2);

    Matrix result = multiplyMatrices(matrix1, matrix2);

    printf("Result of matrix multiplication:\n");
    printMatrix(result);

    freeMatrix(&matrix1);
    freeMatrix(&matrix2);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/6.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q7) WAP to implement LINEAR SERCH using functions</p>

<br>

```cpp
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
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/7.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q8) WAP to implement BINARY SEARCH using functions (use iterative method)</p>

<br>

```cpp
#include <stdio.h>

int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Key found at mid index
        }
        else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        }
        else {
            high = mid - 1; // Search in the left half
        }
    }

    return -1; // Key not found
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
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/8.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q9) WAP to implement BINARY SEARCH using functions (use recursive method)</p>

<br>

```cpp
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
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/9.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q10) WAP to implement BUBBLE SORT using functions</p>

<br>

```cpp
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
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/10.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q11) WAP to implement SELECTION SORT using functions</p>

<br>

```cpp
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
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/11.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q12) WAP to implement INSERTION SORT using functions</p>

<br>

```cpp
#include <stdio.h>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {8, 4, 2, 7, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/12.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q13) WAP to implement MERGE SORT using functions</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0; // Index for left subarray
    int j = 0; // Index for right subarray
    int k = 0; // Index for merged array

    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from left subarray
    while (i < leftSize) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy any remaining elements from right subarray
    while (j < rightSize) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int size) {
    if (size <= 1) {
        return; // Base case: already sorted
    }

    int mid = size / 2;

    // Create left and right subarrays
    int* left = (int*)malloc(mid * sizeof(int));
    int* right = (int*)malloc((size - mid) * sizeof(int));

    // Copy elements to subarrays
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < size; i++) {
        right[i - mid] = arr[i];
    }

    // Recursively sort left and right subarrays
    mergeSort(left, mid);
    mergeSort(right, size - mid);

    // Merge the sorted subarrays
    merge(arr, left, mid, right, size - mid);

    // Free memory for subarrays
    free(left);
    free(right);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {8, 4, 2, 7, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    mergeSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/13.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q14) WAP to implement the concept of Sparse Matrix</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
    int value;
} Element;

typedef struct {
    int numRows;
    int numCols;
    int numElements;
    Element* elements;
} SparseMatrix;

SparseMatrix* createSparseMatrix(int numRows, int numCols) {
    SparseMatrix* matrix = (SparseMatrix*)malloc(sizeof(SparseMatrix));
    matrix->numRows = numRows;
    matrix->numCols = numCols;
    matrix->numElements = 0;
    matrix->elements = NULL;
    return matrix;
}

void insertElement(SparseMatrix* matrix, int row, int col, int value) {
    if (row < 0 || row >= matrix->numRows || col < 0 || col >= matrix->numCols) {
        printf("Error: Invalid position\n");
        return;
    }

    Element newElement;
    newElement.row = row;
    newElement.col = col;
    newElement.value = value;

    matrix->numElements++;
    matrix->elements = (Element*)realloc(matrix->elements, matrix->numElements * sizeof(Element));
    matrix->elements[matrix->numElements - 1] = newElement;
}

int retrieveElement(SparseMatrix* matrix, int row, int col) {
    for (int i = 0; i < matrix->numElements; i++) {
        if (matrix->elements[i].row == row && matrix->elements[i].col == col) {
            return matrix->elements[i].value;
        }
    }
    return 0;
}

void displaySparseMatrix(SparseMatrix* matrix) {
    for (int i = 0; i < matrix->numRows; i++) {
        for (int j = 0; j < matrix->numCols; j++) {
            int value = retrieveElement(matrix, i, j);
            printf("%d ", value);
        }
        printf("\n");
    }
}

void freeSparseMatrix(SparseMatrix* matrix) {
    free(matrix->elements);
    free(matrix);
}

int main() {
    int numRows = 5;
    int numCols = 5;

    SparseMatrix* matrix = createSparseMatrix(numRows, numCols);

    insertElement(matrix, 0, 1, 2);
    insertElement(matrix, 1, 2, 5);
    insertElement(matrix, 2, 3, 9);
    insertElement(matrix, 3, 4, 7);
    insertElement(matrix, 4, 0, 3);

    printf("Sparse Matrix:\n");
    displaySparseMatrix(matrix);

    freeSparseMatrix(matrix);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/14.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q15) WAP to implement a SINGLY LINKED LIST with the following functions-<br>Insert a node at front<br>Insert a node at last<br>Insert a node after a particular element<br>Insert a node before a particular element<br>Delete a node from front<br>Delete a node from last<br>Delete a particular node<br>Sort a list<br>Reverse a list<br>Count the nodes<br>Display the elements in list</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct SinglyLinkedList {
    struct Node* head;
};



void initialiseList(struct SinglyLinkedList* list) {
    list->head = NULL;
}



void printList(struct SinglyLinkedList* list) {
    // If list is empty
    if (list->head == NULL) {
        printf("[]\n");
    }
    
    // Else, loop thro the nodes
    else {
        struct Node* currnode;
        printf("[");
        // Gets the first node
        currnode = list->head;
    
        // While it isnt the last node, keep printing its data and going to next node
        while (currnode->next != NULL)    {
            printf("%d, ", currnode->data);
            currnode = currnode->next;
        }

        // Once the last node is reached, print the data and close the array
        printf("%d]\n", currnode->data);
    }
}



void appendToFront(struct SinglyLinkedList* list, int data) {
    // anode is head, bnode is new node, cnode is first node, aka the one that will be after bnode. So the end result should look like:
    // anode (head) -> bnode (new) -> cnode

    // Allocates memory to new node
    struct Node* bnode = (struct Node*) malloc(sizeof(struct Node));
    bnode->data        = data;
    bnode->next        = NULL;

    // Checks if list is empty. If it is, tells head to point to bnode
    if (list->head == NULL) {
        list->head = bnode;
    }
    // Else, tells bnode to point to cnode (what head is pointing to), and then head to point to bnode
    else {
        bnode->next = list->head;
        list->head  = bnode;
    }
}



void appendToEnd(struct SinglyLinkedList* list, int data) {
    // Allocates memory to new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data        = data;
    node->next        = NULL;

    // Checks if list is empty. If it is, tells head to point to node
    if (list->head == NULL) {
        list->head = node;
    }
    // Else, loop thro the nodes
    else {
        // Gets the first node
        struct Node* currnode = list->head;
        // While it isnt the last node, keep going to next node
        while (currnode->next != NULL)    {currnode = currnode->next;}
        // Once the last node is reached, tell it to point to node
        currnode->next = node;
    }
}



int insertBefore(struct SinglyLinkedList* list, int data, int beforeval) {
    // If list is empty, print error and return -1
    if (list->head == NULL) {
        printf("List is empty!\n");
        return -1;
    }

    // Allocates memory to new node
    struct Node* bnode = (struct Node*) malloc(sizeof(struct Node));
    bnode->data        = data;
    bnode->next        = NULL;

    // Initialises anode and checks if its the needed node
    struct Node* anode = list->head;
    if (anode->data == beforeval) {
        appendToFront(list, data);
        return 1;
    }
    // Checks if there is no next value, meaning the list only has one node, and its value isnt the value that we needed to find
    if (anode->next == NULL) {
        printf("%d not present in list ", data);
        printList(list);
        return 1;
    }

    // Gets cnode
    struct Node* cnode = anode->next;
    bool found = false;

    // Loops thro the list until we get to the end
    while (cnode != NULL) {
        // Checks if we need to insert bnode before cnode
        if (cnode->data == beforeval) {
            // Makes bnode point to cnode
            bnode->next = cnode;
            // Makes a node point to cnode
            anode->next = bnode;
            found = true;
            break;
        }
        anode = cnode;
        cnode = cnode->next;
    }

    // In case the element was not found in the list
    if (!found) {
        printf("%d was not found in the list ", beforeval);
        printList(list);
    }
    return 1;
}



int insertAfter(struct SinglyLinkedList* list, int data, int afterval) {
    // If list is empty, print error and return -1
    if (list->head == NULL) {
        printf("List is empty!\n");
        return -1;
    }

    // Allocates memory to new node
    struct Node* bnode = (struct Node*) malloc(sizeof(struct Node));
    bnode->data        = data;
    bnode->next        = NULL;

    // Initialises anode
    struct Node* anode = list->head;
    bool found = false;
    // Loops until last node is reached
    while (anode->next != NULL) {
        // Checks if anode has the required value
        if (anode->data == afterval) {
            // Gets cnode, ie the node after anode
            struct Node* cnode = anode->next;
            // Makes bnode point to cnode
            bnode->next = cnode;
            // Makes anode point to bnode
            anode->next = bnode;
            found = true;
            break;
        }
        // Moves onto next node
        anode = anode->next;
    }

    // If the node wasnt found
    if (!found) {
        // Checks if last node is the required node
        if (anode->data == afterval) {
            // Makes anode point to bnode
            anode->next = bnode;
            return 1;
        }
        else {
            printf("%d was not found in the list ", afterval);
            printList(list);
            return -1;
        }
    }
    return 1;

}

void deleteFront(struct SinglyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = list->head;
    list->head = list->head->next;
    free(temp);
}

void deleteLast(struct SinglyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (list->head->next == NULL) {
        free(list->head);
        list->head = NULL;
        return;
    }

    struct Node* currNode = list->head;
    while (currNode->next->next != NULL) {
        currNode = currNode->next;
    }

    struct Node* temp = currNode->next;
    currNode->next = NULL;
    free(temp);
}

void deleteNode(struct SinglyLinkedList* list, int data) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (list->head->data == data) {
        struct Node* temp = list->head;
        list->head = list->head->next;
        free(temp);
        return;
    }

    struct Node* currNode = list->head;
    bool found = false;
    while (currNode->next != NULL) {
        if (currNode->next->data == data) {
            struct Node* temp = currNode->next;
            currNode->next = currNode->next->next;
            free(temp);
            found = true;
            break;
        }
        currNode = currNode->next;
    }

    if (!found) {
        printf("%d was not found in the list.\n", data);
    }
}

void sortList(struct SinglyLinkedList* list) {
    if (list->head == NULL || list->head->next == NULL) {
        return;
    }

    struct Node* i, *j;
    int temp;

    for (i = list->head; i->next != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void reverseList(struct SinglyLinkedList* list) {
    struct Node* prev = NULL;
    struct Node* curr = list->head;
    struct Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    list->head = prev;
}

int countNodes(struct SinglyLinkedList* list) {
    struct Node* currNode = list->head;
    int count = 0;

    while (currNode != NULL) {
        count++;
        currNode = currNode->next;
    }

    return count;
}






int main() {
    struct SinglyLinkedList list;

    initialiseList(&list);

    printf("List: ");
    printList(&list);

    appendToFront(&list, 15);
    appendToFront(&list, 10);
    appendToEnd(&list, 20);
    insertAfter(&list, 13, 10);
    insertBefore(&list, 17, 20);

    printf("List after initial insertions: ");
    printList(&list);

    deleteFront(&list);
    deleteLast(&list);
    deleteNode(&list, 13);

    printf("List after deletions: ");
    printList(&list);

    sortList(&list);
    printf("List after sorting: ");
    printList(&list);

    reverseList(&list);
    printf("List after reversing: ");
    printList(&list);

    int nodeCount = countNodes(&list);
    printf("Number of nodes in the list: %d\n", nodeCount);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/15.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q16) WAP to implement a DOUBLY LINKED LIST with the<br>following functions-<br>Insert a node at front<br>Insert a node at last<br>Insert a node after a particular element<br>Insert a node before a particular element<br>Delete a node from front<br>Delete a node from last<br>Delete a particular node<br>Sort a list<br>Count the nodes<br>Display the elements in list</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    struct Node* prev;
    int data;
    struct Node* next;
};

struct DoublyLinkedList {
    struct Node* head;
};

void initialiseList(struct DoublyLinkedList* list) {
    list->head = NULL;
}

void printList(struct DoublyLinkedList* list) {
    if (list->head == NULL) {
        printf("[]\n");
        return;
    }

    struct Node* currNode = list->head;
    printf("[");
    while (currNode->next != NULL) {
        printf("%d, ", currNode->data);
        currNode = currNode->next;
    }
    printf("%d]\n", currNode->data);
}

void insertFront(struct DoublyLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = list->head;

    if (list->head != NULL) {
        list->head->prev = newNode;
    }

    list->head = newNode;
}

void insertLast(struct DoublyLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (list->head == NULL) {
        newNode->prev = NULL;
        list->head = newNode;
        return;
    }

    struct Node* lastNode = list->head;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    lastNode->next = newNode;
    newNode->prev = lastNode;
}

void insertAfter(struct DoublyLinkedList* list, int data, int afterData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node* currNode = list->head;
    while (currNode != NULL && currNode->data != afterData) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        printf("Element %d not found in the list.\n", afterData);
        free(newNode);
        return;
    }

    newNode->next = currNode->next;
    newNode->prev = currNode;
    if (currNode->next != NULL) {
        currNode->next->prev = newNode;
    }
    currNode->next = newNode;
}

void insertBefore(struct DoublyLinkedList* list, int data, int beforeData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    struct Node* currNode = list->head;
    while (currNode != NULL && currNode->data != beforeData) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        printf("Element %d not found in the list.\n", beforeData);
        free(newNode);
        return;
    }

    newNode->prev = currNode->prev;
    newNode->next = currNode;
    if (currNode->prev != NULL) {
        currNode->prev->next = newNode;
    } else {
        list->head = newNode;
    }
    currNode->prev = newNode;
}

void deleteFront(struct DoublyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = list->head;
    list->head = list->head->next;
    if (list->head != NULL) {
        list->head->prev = NULL;
    }
    free(temp);
}

void deleteLast(struct DoublyLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (list->head->next == NULL) {
        free(list->head);
        list->head = NULL;
        return;
    }

    struct Node* lastNode = list->head;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    lastNode->prev->next = NULL;
    free(lastNode);
}

void deleteNode(struct DoublyLinkedList* list, int data) {
    if (list->head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* currNode = list->head;
    while (currNode != NULL && currNode->data != data) {
        currNode = currNode->next;
    }

    if (currNode == NULL) {
        printf("Element %d not found in the list.\n", data);
        return;
    }

    if (currNode->prev != NULL) {
        currNode->prev->next = currNode->next;
    } else {
        list->head = currNode->next;
    }

    if (currNode->next != NULL) {
        currNode->next->prev = currNode->prev;
    }

    free(currNode);
}

void sortList(struct DoublyLinkedList* list) {
    if (list->head == NULL || list->head->next == NULL) {
        return;
    }

    struct Node* currNode;
    struct Node* nextNode;
    bool swapped;

    do {
        swapped = false;
        currNode = list->head;

        while (currNode->next != NULL) {
            nextNode = currNode->next;

            if (currNode->data > nextNode->data) {
                int temp = currNode->data;
                currNode->data = nextNode->data;
                nextNode->data = temp;
                swapped = true;
            }

            currNode = nextNode;
        }
    } while (swapped);
}

int countNodes(struct DoublyLinkedList* list) {
    int count = 0;
    struct Node* currNode = list->head;

    while (currNode != NULL) {
        count++;
        currNode = currNode->next;
    }

    return count;
}

int main() {
    struct DoublyLinkedList list;
    initialiseList(&list);

    printf("List after initialization: ");
    printList(&list);

    insertLast(&list, 20);
    printf("List after inserting 20 at the end: ");
    printList(&list);

    insertFront(&list, 15);
    printf("List after inserting 15 at the front: ");
    printList(&list);

    insertFront(&list, 10);
    printf("List after inserting 10 at the front: ");
    printList(&list);

    insertAfter(&list, 25, 20);
    printf("List after inserting 25 after 20: ");
    printList(&list);

    insertBefore(&list, 5, 10);
    printf("List after inserting 5 before 10: ");
    printList(&list);

    deleteFront(&list);
    printf("List after deleting the front node: ");
    printList(&list);

    deleteLast(&list);
    printf("List after deleting the last node: ");
    printList(&list);

    deleteNode(&list, 15);
    printf("List after deleting node with data 15: ");
    printList(&list);

    sortList(&list);
    printf("List after sorting: ");
    printList(&list);

    int nodeCount = countNodes(&list);
    printf("Number of nodes in the list: %d\n", nodeCount);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/16.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q17) WAP to implement the circular linked list (singly)</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct CircularLinkedList {
    struct Node* head;
};

void initializeList(struct CircularLinkedList* list) {
    list->head = NULL;
}

void printList(struct CircularLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* currentNode = list->head;
    printf("List: ");
    do {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    } while (currentNode != list->head);
    printf("\n");
}

void insertFront(struct CircularLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (list->head == NULL) {
        newNode->next = newNode;
        list->head = newNode;
    } else {
        struct Node* lastNode = list->head;
        while (lastNode->next != list->head) {
            lastNode = lastNode->next;
        }
        newNode->next = list->head;
        lastNode->next = newNode;
        list->head = newNode;
    }
}

void insertEnd(struct CircularLinkedList* list, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (list->head == NULL) {
        newNode->next = newNode;
        list->head = newNode;
    } else {
        struct Node* lastNode = list->head;
        while (lastNode->next != list->head) {
            lastNode = lastNode->next;
        }
        newNode->next = list->head;
        lastNode->next = newNode;
    }
}

void deleteFront(struct CircularLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* currentNode = list->head;
    struct Node* lastNode = list->head;
    while (lastNode->next != list->head) {
        lastNode = lastNode->next;
    }

    if (currentNode == lastNode) {
        list->head = NULL;
        free(currentNode);
    } else {
        list->head = currentNode->next;
        lastNode->next = list->head;
        free(currentNode);
    }
}

void deleteEnd(struct CircularLinkedList* list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* currentNode = list->head;
    struct Node* prevNode = NULL;
    while (currentNode->next != list->head) {
        prevNode = currentNode;
        currentNode = currentNode->next;
    }

    if (prevNode == NULL) {
        list->head = NULL;
        free(currentNode);
    } else {
        prevNode->next = list->head;
        free(currentNode);
    }
}

int main() {
    struct CircularLinkedList list;
    initializeList(&list);

    insertFront(&list, 10);
    insertFront(&list, 20);
    insertEnd(&list, 30);
    insertEnd(&list, 40);

    printList(&list);

    deleteFront(&list);
    deleteEnd(&list);

    printList(&list);

    return 0;
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/17.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q18) WAP to implement Polynomial addition operation using linked list</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a term in the polynomial
struct Term {
    int coefficient;
    int exponent;
    struct Term* next;
};

// Structure to represent the polynomial
struct Polynomial {
    struct Term* head;
};

// Function to initialize the polynomial
void initializePolynomial(struct Polynomial* polynomial) {
    polynomial->head = NULL;
}

// Function to insert a term into the polynomial
void insertTerm(struct Polynomial* polynomial, int coefficient, int exponent) {
    struct Term* newTerm = (struct Term*)malloc(sizeof(struct Term));
    newTerm->coefficient = coefficient;
    newTerm->exponent = exponent;
    newTerm->next = NULL;

    if (polynomial->head == NULL) {
        polynomial->head = newTerm;
    } else {
        struct Term* currentTerm = polynomial->head;
        while (currentTerm->next != NULL) {
            currentTerm = currentTerm->next;
        }
        currentTerm->next = newTerm;
    }
}

// Function to print the polynomial
void printPolynomial(struct Polynomial* polynomial) {
    struct Term* currentTerm = polynomial->head;

    while (currentTerm != NULL) {
        printf("%dx^%d", currentTerm->coefficient, currentTerm->exponent);

        if (currentTerm->next != NULL) {
            printf(" + ");
        }

        currentTerm = currentTerm->next;
    }

    printf("\n");
}

// Function to add two polynomials
struct Polynomial addPolynomials(struct Polynomial* polynomial1, struct Polynomial* polynomial2) {
    struct Polynomial result;
    initializePolynomial(&result);

    struct Term* term1 = polynomial1->head;
    struct Term* term2 = polynomial2->head;

    while (term1 != NULL && term2 != NULL) {
        if (term1->exponent > term2->exponent) {
            insertTerm(&result, term1->coefficient, term1->exponent);
            term1 = term1->next;
        } else if (term1->exponent < term2->exponent) {
            insertTerm(&result, term2->coefficient, term2->exponent);
            term2 = term2->next;
        } else {
            int sum = term1->coefficient + term2->coefficient;
            insertTerm(&result, sum, term1->exponent);
            term1 = term1->next;
            term2 = term2->next;
        }
    }

    // Append the remaining terms of polynomial1
    while (term1 != NULL) {
        insertTerm(&result, term1->coefficient, term1->exponent);
        term1 = term1->next;
    }

    // Append the remaining terms of polynomial2
    while (term2 != NULL) {
        insertTerm(&result, term2->coefficient, term2->exponent);
        term2 = term2->next;
    }

    return result;
}

int main() {
    // Create the first polynomial: 3x^2 + 4x + 2
    struct Polynomial polynomial1;
    initializePolynomial(&polynomial1);
    insertTerm(&polynomial1, 3, 2);
    insertTerm(&polynomial1, 4, 1);
    insertTerm(&polynomial1, 2, 0);

    // Create the second polynomial: 2x^3 + 5x + 1
    struct Polynomial polynomial2;
    initializePolynomial(&polynomial2);
    insertTerm(&polynomial2, 2, 3);
    insertTerm(&polynomial2, 5, 1);
    insertTerm(&polynomial2, 1, 0);

    // Add the polynomials
    struct Polynomial sum = addPolynomials(&polynomial1, &polynomial2);

    // Print the polynomials and their sum
    printf("Polynomial 1: ");
    printPolynomial(&polynomial1);

    printf("Polynomial 2: ");
    printPolynomial(&polynomial2);

    printf("Sum: ");
    printPolynomial(&sum);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/18.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q19) Write a C program to create two linked lists from a given list in<br>following way<br>INPUT List-1 2 3 4 5 6 7 8 9 10<br>OUTPUT:-<br>First List :- 1 3 5 7 9<br>Second List :-2 4 6 8 10</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the end of the linked list
void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to create two linked lists from a given list
void createLists(struct Node* head, struct Node** list1, struct Node** list2) {
    struct Node* current = head;
    int count = 0;

    while (current != NULL) {
        if (count % 2 == 0) {
            insertNode(list1, current->data);
        } else {
            insertNode(list2, current->data);
        }
        current = current->next;
        count++;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}

int main() {
    struct Node* list = NULL;
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    // Input List: 1 2 3 4 5 6 7 8 9 10
    insertNode(&list, 1);
    insertNode(&list, 2);
    insertNode(&list, 3);
    insertNode(&list, 4);
    insertNode(&list, 5);
    insertNode(&list, 6);
    insertNode(&list, 7);
    insertNode(&list, 8);
    insertNode(&list, 9);
    insertNode(&list, 10);

    createLists(list, &list1, &list2);

    printf("First List: ");
    printList(list1);

    printf("Second List: ");
    printList(list2);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/19.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q20) WAP to implement Student Database using Linked List with the<br>following structure<br>- Name<br>- Rollno<br>- Marks of 5 subjects<br>- Average<br>- Result, If the average <50, then print 'Fail', otherwise<br>'Pass'</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int rollno;
    int marks[5];
    float average;
    char result[10];
    struct Student* next;
};

// Function to create a new student node
struct Student* createStudent(char name[], int rollno, int marks[]) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    strcpy(newStudent->name, name);
    newStudent->rollno = rollno;
    memcpy(newStudent->marks, marks, sizeof(newStudent->marks));

    // Calculate the average
    int totalMarks = 0;
    for (int i = 0; i < 5; i++) {
        totalMarks += marks[i];
    }
    newStudent->average = (float)totalMarks / 5;

    // Set the result
    if (newStudent->average < 50) {
        strcpy(newStudent->result, "Fail");
    } else {
        strcpy(newStudent->result, "Pass");
    }

    newStudent->next = NULL;

    return newStudent;
}

// Function to insert a student at the end of the linked list
void insertStudent(struct Student** head, struct Student* newStudent) {
    if (*head == NULL) {
        *head = newStudent;
    } else {
        struct Student* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newStudent;
    }
}

// Function to display the student database
void displayStudents(struct Student* head) {
    struct Student* current = head;
    while (current != NULL) {
        printf("Name: %s\n", current->name);
        printf("Roll No: %d\n", current->rollno);
        printf("Marks: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", current->marks[i]);
        }
        printf("\n");
        printf("Average: %.2f\n", current->average);
        printf("Result: %s\n", current->result);
        printf("--------------------\n");
        current = current->next;
    }
}

int main() {
    struct Student* head = NULL;

    // Creating and inserting students
    int marks1[] = {75, 80, 85, 90, 92};
    struct Student* student1 = createStudent("John", 1, marks1);
    insertStudent(&head, student1);

    int marks2[] = {65, 70, 75, 80, 82};
    struct Student* student2 = createStudent("Emily", 2, marks2);
    insertStudent(&head, student2);

    int marks3[] = {55, 60, 65, 70, 72};
    struct Student* student3 = createStudent("David", 3, marks3);
    insertStudent(&head, student3);

    // Displaying the student database
    displayStudents(head);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/20.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q21) WAP to implement the STACK using Linked List with<br>following functions-<br>Push an element in Stack<br>Pop an element from Stack<br>Display the elements in Stack</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


struct Node {
    int data;
    struct Node* next;
};

struct SinglyLinkedList {
    struct Node* head;
};

struct Stack {
    struct SinglyLinkedList* data;
    int top;
};



void appendToEnd(struct SinglyLinkedList* list, int data) {
    // Allocates memory to new node
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data        = data;
    node->next        = NULL;

    // Checks if list is empty. If it is, tells head to point to node
    if (list->head == NULL) {
        list->head = node;
    }
    // Else, loop thro the nodes
    else {
        // Gets the first node
        struct Node* currnode = list->head;
        // While it isnt the last node, keep going to next node
        while (currnode->next != NULL)    {currnode = currnode->next;}
        // Once the last node is reached, tell it to point to node
        currnode->next = node;
    }
}


int deleteFromEnd(struct SinglyLinkedList* list) {
    // Checks if list is empty. If it is, stop the program
    if (list->head == NULL) {return -1;}

    struct Node* last_node;
    int val;

    // Checks if only one node is there. If it is, tells head to point to NULL
    if (list->head->next == NULL) {
        last_node  = list->head;
        list->head = NULL;
        val        = last_node->data;
        free(last_node);
        return val;
    }

    // Gets the first node
    struct Node* currnode = list->head;
    // While it isnt the second last node, keep going to next node
    while (currnode->next->next != NULL)    {currnode = currnode->next;}
    // Once the second last node is reached, tell it to point to NULL
    last_node      = currnode->next;
    currnode->next = NULL;
    val            = last_node->data;
    free(last_node);
    return val;
}


void printList(struct SinglyLinkedList* list) {
    // If list is empty
    if (list->head == NULL) {
        printf("[]\n");
    }
    
    // Else, loop thro the nodes
    else {
        struct Node* currnode;
        printf("[");
        // Gets the first node
        currnode = list->head;
    
        // While it isnt the last node, keep printing its data and going to next node
        while (currnode->next != NULL)    {
            printf("%d, ", currnode->data);
            currnode = currnode->next;
        }

        // Once the last node is reached, print the data and close the array
        printf("%d]\n", currnode->data);
    }
}




void initialiseStack(struct Stack *s) {
    struct SinglyLinkedList* list = (struct SinglyLinkedList*) malloc( sizeof(struct SinglyLinkedList) );
    list->head = NULL;
    s->top     = -1;
    s->data    = list;
}


void push(struct Stack *s, int val) {
    // Check the overflow condition
    if (s->top == SIZE-1) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top += 1;
    appendToEnd(s->data, val);
}


int pop(struct Stack *s) {
    // Check the underflow condition
    if (s->top == -1) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    s->top -= 1;
    int val = deleteFromEnd(s->data);

    return val;
}



void display(struct Stack *s) {
    printList(s->data);
}



int main() {
    struct Stack s;
    initialiseStack(&s);
    push(&s, 12);
    display(&s);
    push(&s, 5);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/21.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q22) WAP to implement the STACK using Arrays with<br>following functions-<br>Push an element in Stack<br>Pop an element from Stack<br>Display the elements in Stack</p>

<br>

```cpp
#include <stdio.h>
#define SIZE 100


struct Stack {
    int data[SIZE];
    int top;
};


void initialiseStack(struct Stack *s) {
    s->top = -1;
}


void push(struct Stack *s, int val) {
    // Check the overflow condition
    if (s->top == SIZE-1) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top += 1;
    s->data[s->top] = val;
}


int pop(struct Stack *s) {
    // Check the underflow condition
    if (s->top == -1) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    int val = s->data[s->top];
    s->data[s->top] = NULL;
    s->top -= 1;

    return val;
}



void display(struct Stack *s) {
    printf("[");

    // Checks if the list is empty
    if (s->top == -1) {
        printf("]");
        return;
    }

    for (int i=0; i<s->top; i++) {
        printf("%d, ", s->data[i]);
    }
    printf("%d]\n", s->data[s->top]);

}



int main() {
    struct Stack s;
    initialiseStack(&s);
    push(&s, 12);
    display(&s);
    push(&s, 5);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/22.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q23) WAP to evaluate a (i) PREFIX expression (ii) POSTFIX expression using Stack</p>

<br>

```cpp
#include <stdio.h>
#include <string.h>
#include <ctype.h>   
#define SIZE 100

struct Stack {
    int data[SIZE];
    int top;
};

void initialiseStack(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, int val) {
    // Check the overflow condition
    if (s->top == SIZE-1) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top += 1;
    s->data[s->top] = val;
}

int pop(struct Stack *s) {
    // Check the underflow condition
    if (s->top == -1) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    int val = s->data[s->top];
    s->data[s->top] = 0;
    s->top -= 1;

    return val;
}

void display(struct Stack *s) {
    printf("[");

    // Checks if the list is empty
    if (s->top == -1) {
        printf("]");
        return;
    }

    for (int i = 0; i < s->top; i++) {
        printf("%d, ", s->data[i]);
    }
    printf("%d]\n", s->data[s->top]);
}

int evaluatePrefix(char* expression) {
    struct Stack stack;
    initialiseStack(&stack);
    
    int length = strlen(expression);
    
    for (int i = length - 1; i >= 0; i--) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else {
            int operand1 = pop(&stack);
            int operand2 = pop(&stack);
            int result;
            
            switch (expression[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    printf("ERROR: Invalid Operator\n");
                    return -1;
            }
            
            push(&stack, result);
        }
    }
    
    int finalResult = pop(&stack);
    return finalResult;
}

int evaluatePostfix(char* expression) {
    struct Stack stack;
    initialiseStack(&stack);
    
    int length = strlen(expression);
    
    for (int i = 0; i < length; i++) {
        if (isdigit(expression[i])) {
            push(&stack, expression[i] - '0');
        } else {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int result;
            
            switch (expression[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    printf("ERROR: Invalid Operator\n");
                    return -1;
            }
            
            push(&stack, result);
        }
    }
    
    int finalResult = pop(&stack);
    return finalResult;
}

int main() {
    char prefixExpression[] = "*+35-42";
    printf("Prefix Expression: %s\n", prefixExpression);
    int prefixResult = evaluatePrefix(prefixExpression);
    printf("Result: %d\n\n", prefixResult);
    
    char postfixExpression[] = "35+42-*";
    printf("Postfix Expression: %s\n", postfixExpression);
    int postfixResult = evaluatePostfix(postfixExpression);
    printf("Result: %d\n", postfixResult);
    
    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/23.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q24) WAP to convert an INFIX expression to (i) PREFIX (ii) POSTFIX using Stack</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

struct Stack {
    char data[SIZE];
    int top;
};

void initialiseStack(struct Stack *s) {
    s->top = -1;
}

void push(struct Stack *s, char val) {
    // Check the overflow condition
    if (s->top == SIZE-1) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top += 1;
    s->data[s->top] = val;
}

char pop(struct Stack *s) {
    // Check the underflow condition
    if (s->top == -1) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    char val = s->data[s->top];
    s->data[s->top] = '\0';
    s->top -= 1;

    return val;
}

char peek(struct Stack *s) {
    // Check if the stack is empty
    if (s->top == -1) {
        printf("ERROR: Stack is empty\n");
        return -1;
    }

    return s->data[s->top];
}

int isOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int getPrecedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void infixToPrefix(char* infixExpression, char* prefixExpression) {
    struct Stack stack;
    initialiseStack(&stack);

    int infixLength = strlen(infixExpression);
    int prefixIndex = 0;

    for (int i = infixLength - 1; i >= 0; i--) {
        if (infixExpression[i] == ')') {
            push(&stack, infixExpression[i]);
        } else if (infixExpression[i] == '(') {
            while (stack.top != -1 && peek(&stack) != ')') {
                prefixExpression[prefixIndex++] = pop(&stack);
            }
            pop(&stack); // Discard ')'
        } else if (isOperand(infixExpression[i])) {
            prefixExpression[prefixIndex++] = infixExpression[i];
        } else {
            while (stack.top != -1 && getPrecedence(infixExpression[i]) < getPrecedence(peek(&stack))) {
                prefixExpression[prefixIndex++] = pop(&stack);
            }
            push(&stack, infixExpression[i]);
        }
    }

    while (stack.top != -1) {
        prefixExpression[prefixIndex++] = pop(&stack);
    }

    prefixExpression[prefixIndex] = '\0';

    // Reverse the prefix expression
    int start = 0;
    int end = prefixIndex - 1;
    while (start < end) {
        char temp = prefixExpression[start];
        prefixExpression[start] = prefixExpression[end];
        prefixExpression[end] = temp;
        start++;
        end--;
    }
}

void infixToPostfix(char* infixExpression, char* postfixExpression) {
    struct Stack stack;
    initialiseStack(&stack);

    int infixLength = strlen(infixExpression);
    int postfixIndex = 0;

    for (int i = 0; i < infixLength; i++) {
        if (infixExpression[i] == '(') {
            push(&stack, infixExpression[i]);
        } else if (infixExpression[i] == ')') {
            while (stack.top != -1 && peek(&stack) != '(') {
                postfixExpression[postfixIndex++] = pop(&stack);
            }
            pop(&stack); // Discard '('
        } else if (isOperand(infixExpression[i])) {
            postfixExpression[postfixIndex++] = infixExpression[i];
        } else {
            while (stack.top != -1 && getPrecedence(infixExpression[i]) <= getPrecedence(peek(&stack))) {
                postfixExpression[postfixIndex++] = pop(&stack);
            }
            push(&stack, infixExpression[i]);
        }
    }

    while (stack.top != -1) {
        postfixExpression[postfixIndex++] = pop(&stack);
    }

    postfixExpression[postfixIndex] = '\0';
}

int main() {
    char infixExpression[SIZE];
    printf("Enter the INFIX expression: ");
    fgets(infixExpression, SIZE, stdin);
    infixExpression[strcspn(infixExpression, "\n")] = '\0'; // Remove the newline character from fgets

    char prefixExpression[SIZE];
    char postfixExpression[SIZE];

    infixToPrefix(infixExpression, prefixExpression);
    printf("PREFIX Expression: %s\n", prefixExpression);

    infixToPostfix(infixExpression, postfixExpression);
    printf("POSTFIX Expression: %s\n", postfixExpression);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/24.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q25) Sometimes a program requires two stacks containing the same type of items. Suppose two stacks are stored in separate arrays, then one stack might overflow while there is considerable unused space in the other. A neat way to avoid this problem is to put all spaces in one stack and let this stack grow from one end of the array, and the other stack starts from the other end and grows in the opposite direction, ie, toward the first stack. In this way, if one stack turns out to be large and the other small, then they will still both fit, and there will be no overflow until all space is used. Declare a new structure that includes these two stacks and perform various stack operations</p>

<br>

```cpp
#include <stdio.h>
#define SIZE 10


struct TwoSidedStack {
    int data[SIZE];
    int top_left;
    int top_right;
};


void initialiseStack(struct TwoSidedStack *s) {
    s->top_left  = -1;
    s->top_right = SIZE;
}


void push_left(struct TwoSidedStack *s, int val) {
    // Check the overflow condition
    if (s->top_left >= s->top_right) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top_left += 1;
    s->data[s->top_left] = val;
}

void push_right(struct TwoSidedStack *s, int val) {
    // Check the overflow condition
    if (s->top_left >= s->top_right) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top_right -= 1;
    s->data[s->top_right] = val;
}


int pop_left(struct TwoSidedStack *s) {
    // Check the underflow condition
    if (s->top_left == -1 && s->top_right == SIZE) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    int val = s->data[s->top_left];
    // s->data[s->top_left] = NULL;
    s->top_left -= 1;

    return val;
}


int pop_right(struct TwoSidedStack *s) {
    // Check the underflow condition
    if (s->top_left == -1 && s->top_right == SIZE) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    int val = s->data[s->top_right];
    // s->data[s->top_right] = NULL;
    s->top_right += 1;

    return val;
}




void display(struct TwoSidedStack *s) {
    // printf("[");

    // If list is empty
    if (s->top_left == -1 && s->top_right == SIZE) {
        printf("]");
        return;
    }

    // printf("%d\n", s->top_left);
    for (int i=0; i<=s->top_left; i++) {
        printf("%d ", s->data[i]);
    }
    for (int i=s->top_left+1; i<s->top_right; i++) {
        printf("- ");
    }
    for (int i=s->top_right; i<SIZE; i++) {
        printf("%d ", s->data[i]);
    }

    printf("\n");
}



int main() {
    struct TwoSidedStack s;
    initialiseStack(&s);

    push_left(&s, 1);
    display(&s);
    push_right(&s, 9);
    display(&s);

    push_left(&s, 2);
    display(&s);
    push_right(&s, 8);
    display(&s);

    pop_left(&s);
    display(&s);
    pop_right(&s);
    display(&s);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/25.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q26) WAP to implement CIRCULAR QUEUE using Arrays</p>

<br>

```cpp
#include <stdio.h>
#define MAX_SIZE 5

struct CircularQueue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

void initialiseQueue(struct CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct CircularQueue *q) {
    return (q->front == 0 && q->rear == MAX_SIZE - 1) || (q->front == q->rear + 1);
}

int isEmpty(struct CircularQueue *q) {
    return q->front == -1;
}

void enqueue(struct CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Error: Queue is full\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else if (q->rear == MAX_SIZE - 1) {
        q->rear = 0;
    } else {
        q->rear += 1;
    }

    q->items[q->rear] = value;
    printf("Enqueued: %d\n", value);
}

int dequeue(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Error: Queue is empty\n");
        return -1;
    }

    int dequeuedValue = q->items[q->front];

    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else if (q->front == MAX_SIZE - 1) {
        q->front = 0;
    } else {
        q->front += 1;
    }

    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

void display(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    if (q->rear >= q->front) {
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
    } else {
        for (int i = q->front; i < MAX_SIZE; i++) {
            printf("%d ", q->items[i]);
        }
        for (int i = 0; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
    }

    printf("\n");
}

int main() {
    struct CircularQueue q;
    initialiseQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    display(&q);

    dequeue(&q);
    dequeue(&q);

    display(&q);

    enqueue(&q, 6);
    enqueue(&q, 7);

    display(&q);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/26.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q27) WAP to implement QUEUE using Linked List</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

void initialiseQueue(struct Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(struct Queue* q) {
    return q->front == NULL;
}

void enqueue(struct Queue* q, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
    }

    printf("Enqueued: %d\n", value);
}

int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Error: Queue is empty\n");
        return -1;
    }

    struct Node* temp = q->front;
    int dequeuedValue = temp->data;

    q->front = q->front->next;
    free(temp);

    if (q->front == NULL) {
        q->rear = NULL;
    }

    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    struct Node* currNode = q->front;
    while (currNode != NULL) {
        printf("%d ", currNode->data);
        currNode = currNode->next;
    }
    printf("\n");
}

int main() {
    struct Queue q;
    initialiseQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    display(&q);

    dequeue(&q);
    dequeue(&q);

    display(&q);

    enqueue(&q, 6);
    enqueue(&q, 7);

    display(&q);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/27.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q28) WAP to implement PRIORITY QUEUE using Linked List</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int priority;
    struct Node* next;
};

struct PriorityQueue {
    struct Node* front;
};

void initialiseQueue(struct PriorityQueue* pq) {
    pq->front = NULL;
}

int isEmpty(struct PriorityQueue* pq) {
    return pq->front == NULL;
}

void enqueue(struct PriorityQueue* pq, int value, int priority) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->priority = priority;
    newNode->next = NULL;

    if (isEmpty(pq) || priority < pq->front->priority) {
        newNode->next = pq->front;
        pq->front = newNode;
    } else {
        struct Node* temp = pq->front;
        while (temp->next != NULL && temp->next->priority <= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Enqueued: %d (Priority: %d)\n", value, priority);
}

int dequeue(struct PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Error: Queue is empty\n");
        return -1;
    }

    struct Node* temp = pq->front;
    int dequeuedValue = temp->data;

    pq->front = pq->front->next;
    free(temp);

    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

void display(struct PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Priority Queue: ");
    struct Node* currNode = pq->front;
    while (currNode != NULL) {
        printf("%d (Priority: %d) ", currNode->data, currNode->priority);
        currNode = currNode->next;
    }
    printf("\n");
}

int main() {
    struct PriorityQueue pq;
    initialiseQueue(&pq);

    enqueue(&pq, 1, 3);
    enqueue(&pq, 2, 2);
    enqueue(&pq, 3, 1);
    enqueue(&pq, 4, 2);
    enqueue(&pq, 5, 1);

    display(&pq);

    dequeue(&pq);
    dequeue(&pq);

    display(&pq);

    enqueue(&pq, 6, 1);
    enqueue(&pq, 7, 3);

    display(&pq);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/28.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q29) WAP to implement NON-CIRCULAR QUEUE using Arrays</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
    int data[MAX_SIZE];
    int front;
    int rear;
};

void initialiseQueue(struct Queue* q) {
    q->front = -1;
    q->rear = -1;
}

int isEmpty(struct Queue* q) {
    return q->front == -1;
}

int isFull(struct Queue* q) {
    return (q->rear + 1) % MAX_SIZE == q->front;
}

void enqueue(struct Queue* q, int value) {
    if (isFull(q)) {
        printf("Error: Queue is full\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;
    q->data[q->rear] = value;

    printf("Enqueued: %d\n", value);
}

int dequeue(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Error: Queue is empty\n");
        return -1;
    }

    int dequeuedValue = q->data[q->front];

    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX_SIZE;
    }

    printf("Dequeued: %d\n", dequeuedValue);
    return dequeuedValue;
}

void display(struct Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");
    int i = q->front;
    while (i != q->rear) {
        printf("%d ", q->data[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", q->data[q->rear]);
}

int main() {
    struct Queue q;
    initialiseQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    display(&q);

    dequeue(&q);
    dequeue(&q);

    display(&q);

    enqueue(&q, 6);
    enqueue(&q, 7);

    display(&q);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/29.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q30) WAP to implement DEQUE using Arrays</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Deque {
    int data[MAX_SIZE];
    int front;
    int rear;
};

void initialiseDeque(struct Deque* dq) {
    dq->front = -1;
    dq->rear = -1;
}

int isEmpty(struct Deque* dq) {
    return dq->front == -1;
}

int isFull(struct Deque* dq) {
    return (dq->rear + 1) % MAX_SIZE == dq->front;
}

void insertFront(struct Deque* dq, int value) {
    if (isFull(dq)) {
        printf("Error: Deque is full\n");
        return;
    }

    if (isEmpty(dq)) {
        dq->front = 0;
        dq->rear = 0;
    } else {
        dq->front = (dq->front - 1 + MAX_SIZE) % MAX_SIZE;
    }

    dq->data[dq->front] = value;

    printf("Inserted at front: %d\n", value);
}

void insertRear(struct Deque* dq, int value) {
    if (isFull(dq)) {
        printf("Error: Deque is full\n");
        return;
    }

    if (isEmpty(dq)) {
        dq->front = 0;
        dq->rear = 0;
    } else {
        dq->rear = (dq->rear + 1) % MAX_SIZE;
    }

    dq->data[dq->rear] = value;

    printf("Inserted at rear: %d\n", value);
}

int deleteFront(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Error: Deque is empty\n");
        return -1;
    }

    int deletedValue = dq->data[dq->front];

    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else {
        dq->front = (dq->front + 1) % MAX_SIZE;
    }

    printf("Deleted from front: %d\n", deletedValue);
    return deletedValue;
}

int deleteRear(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Error: Deque is empty\n");
        return -1;
    }

    int deletedValue = dq->data[dq->rear];

    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else {
        dq->rear = (dq->rear - 1 + MAX_SIZE) % MAX_SIZE;
    }

    printf("Deleted from rear: %d\n", deletedValue);
    return deletedValue;
}

void display(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque: ");
    int i = dq->front;
    while (i != dq->rear) {
        printf("%d ", dq->data[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", dq->data[dq->rear]);
}

int main() {
    struct Deque dq;
    initialiseDeque(&dq);

    insertFront(&dq, 1);
    insertFront(&dq, 2);
    insertRear(&dq, 3);
    insertRear(&dq, 4);

    display(&dq);

    deleteFront(&dq);
    deleteRear(&dq);

    display(&dq);

    insertFront(&dq, 5);
    insertRear(&dq, 6);

    display(&dq);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/30.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q31) WAP to implement DEQUE using Linked List</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Deque {
    struct Node* front;
    struct Node* rear;
};

void initialiseDeque(struct Deque* dq) {
    dq->front = NULL;
    dq->rear = NULL;
}

int isEmpty(struct Deque* dq) {
    return dq->front == NULL;
}

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertFront(struct Deque* dq, int value) {
    struct Node* newNode = createNode(value);

    if (isEmpty(dq)) {
        dq->front = newNode;
        dq->rear = newNode;
    } else {
        newNode->next = dq->front;
        dq->front->prev = newNode;
        dq->front = newNode;
    }

    printf("Inserted at front: %d\n", value);
}

void insertRear(struct Deque* dq, int value) {
    struct Node* newNode = createNode(value);

    if (isEmpty(dq)) {
        dq->front = newNode;
        dq->rear = newNode;
    } else {
        newNode->prev = dq->rear;
        dq->rear->next = newNode;
        dq->rear = newNode;
    }

    printf("Inserted at rear: %d\n", value);
}

int deleteFront(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Error: Deque is empty\n");
        return -1;
    }

    struct Node* deletedNode = dq->front;
    int deletedValue = deletedNode->data;

    dq->front = dq->front->next;
    if (dq->front == NULL) {
        dq->rear = NULL;
    } else {
        dq->front->prev = NULL;
    }

    free(deletedNode);

    printf("Deleted from front: %d\n", deletedValue);
    return deletedValue;
}

int deleteRear(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Error: Deque is empty\n");
        return -1;
    }

    struct Node* deletedNode = dq->rear;
    int deletedValue = deletedNode->data;

    dq->rear = dq->rear->prev;
    if (dq->rear == NULL) {
        dq->front = NULL;
    } else {
        dq->rear->next = NULL;
    }

    free(deletedNode);

    printf("Deleted from rear: %d\n", deletedValue);
    return deletedValue;
}

void display(struct Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty\n");
        return;
    }

    struct Node* current = dq->front;
    printf("Deque: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Deque dq;
    initialiseDeque(&dq);

    insertFront(&dq, 1);
    insertFront(&dq, 2);
    insertRear(&dq, 3);
    insertRear(&dq, 4);

    display(&dq);

    deleteFront(&dq);
    deleteRear(&dq);

    display(&dq);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/31.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q32) Let us assume a Patient's coupon generator for the Doctors' clinic. The patients are given the coupons on first-come-first- serve basis. After the visit of a patient, patient-ID is kept stack- wise. At the end of the day, the count is generated from the stack. Construct a menu-based program for patients' coupons generator using an appropriate data structure</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


struct Stack {
    int data[SIZE];
    int top;
};


void initialiseStack(struct Stack *s) {
    s->top = -1;
}


void push(struct Stack *s, int val) {
    // Check the overflow condition
    if (s->top == SIZE-1) {
        printf("ERROR: OVERFLOW\n");
        return;
    }

    s->top += 1;
    s->data[s->top] = val;
}


int pop(struct Stack *s) {
    // Check the underflow condition
    if (s->top == -1) {
        printf("ERROR: UNDERFLOW\n");
        return -1;
    }

    int val = s->data[s->top];
    s->data[s->top] = NULL;
    s->top -= 1;

    return val;
}







int main() {
    struct Stack *s = (struct Stack*) malloc(sizeof(struct Stack));
    initialiseStack(s);

    int chc;
    int p_id;

    while (true) {
        printf("\n\n-------- Menu --------\n");
        printf("1) Add patient\n");
        printf("2) Generate count\n");
        printf("3) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &chc);

        if (chc==1) {
            printf("\nEnter patient ID: ");
            scanf("%d", &p_id);
            push(s, p_id);
        }

        else if (chc==2) {
            printf("\nThere are currently %d patients in the stack\n", (s->top)+1);
        }

        else {break;}
    }
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/32.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q33) WAP to implement Binary Search Tree (BST) with the<br>following functions-<br>1. Insert a node in BST<br>2. Delete a node from BST<br>3. INORDER Traversal<br>4. POSTORDER Traversal<br>5. PREORDER Traversal</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct BST {
    struct Node* root;
};



struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


struct Node* addNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = addNode(root->left, data);
    } else if (data > root->data) {
        root->right = addNode(root->right, data);
    }
    return root;
}


struct Node* findMinNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}


struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) {
        return root;
    }
    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = findMinNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}



void printNode(struct Node* node, int type) {
    // Type 1: Inorder (left root right)
    // Type 2: Preorder (root left right)
    // Type 3: Postorder (left right root)

    if (node == NULL) {
        return;
    }

    if (node->left == NULL && node->right == NULL) {
        printf("%d ", node->data);
        return;
    }

    if (type == 1) {
        printNode(node->left, type);
        printf("%d ", node->data);
        printNode(node->right, type);
    } else if (type == 2) {
        printf("%d ", node->data);
        printNode(node->left, type);
        printNode(node->right, type);
    } else if (type == 3) {
        printNode(node->left, type);
        printNode(node->right, type);
        printf("%d ", node->data);
    }
}


int main() {
    struct BST bst;
    bst.root = NULL;

    bst.root = addNode(bst.root, 50);
    bst.root = addNode(bst.root, 30);
    bst.root = addNode(bst.root, 20);
    bst.root = addNode(bst.root, 40);
    bst.root = addNode(bst.root, 70);
    bst.root = addNode(bst.root, 60);
    bst.root = addNode(bst.root, 80);

    printf("Binary Search Tree (Inorder): ");
    printNode(bst.root, 1);
    printf("\n");

    printf("Binary Search Tree (Preorder): ");
    printNode(bst.root, 2);
    printf("\n");

    printf("Binary Search Tree (Postorder): ");
    printNode(bst.root, 3);
    printf("\n");

    printf("\n");

    bst.root = deleteNode(bst.root, 30);
    printf("Binary Search Tree after deleting node 30 (Inorder): ");
    printNode(bst.root, 1);

    printf("\n");
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/33.png"> </center>





<div style="page-break-after: always; visibility: hidden">\pagebreak</div>





<p class="question">Q34) WAP to implement an expression tree. (For example: (a+b/(c*d)-e)</p>

<br>

```cpp
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

bool isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
        return true;
    }
    return false;
}

void inorderTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%c ", root->data);
    inorderTraversal(root->right);
}

struct Node* constructExpressionTree(char postfix[]) {
    struct Node* stack[100];
    int top = -1;
    for (int i = 0; postfix[i] != '\0'; i++) {
        if (!isOperator(postfix[i])) {
            struct Node* operand = createNode(postfix[i]);
            stack[++top] = operand;
        } else {
            struct Node* operatr = createNode(postfix[i]);
            operatr->right = stack[top--];
            operatr->left = stack[top--];
            stack[++top] = operatr;
        }
    }
    return stack[top];
}

int main() {
    char postfix[] = "ab+cd*/e-";
    struct Node* root = constructExpressionTree(postfix);

    printf("Inorder Traversal of Expression Tree: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
```

<br>

<center> <img src="/Users/mark/Pictures/DS prac file/34.png"> </center>