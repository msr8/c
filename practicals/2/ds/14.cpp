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
