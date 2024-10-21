#include <stdio.h>
#define MAX 10
void inputMatrix(int matrix[MAX][MAX], int row, int col) 
{
    printf("NAME-ADITYA MEHTA\n class:1A\n");
    printf("Enter elements of matrix (%d x %d): \n", row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printMatrix(int matrix[MAX][MAX], int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void addMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}
void subtractMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}
void multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rowA, int colA, int rowB, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void transposeMatrix(int matrix[MAX][MAX], int result[MAX][MAX], int row, int col)