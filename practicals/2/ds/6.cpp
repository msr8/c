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