// WAP to find the sum and product of 2 matrix using function (user defined)
#include <stdio.h>


void readMatrix(int c[][3], int row, int col) {
    int i,j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int a[][3], int b[][3], int c[][3], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void productMatrix(int a[][3], int b[][3], int c[][3], int row, int col) {
    int i, j, k;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = 0;
            for (k = 0; k < col; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int c[3][3];

    sumMatrix(a, b, c, 3, 3);
    printf("Sum of matrix A and B: \n");
    readMatrix(c, 3, 3);

    productMatrix(a, b, c, 3, 3);
    printf("\nProduct of matrix A and B: \n");
    readMatrix(c, 3, 3);

    printf("\n");
}
