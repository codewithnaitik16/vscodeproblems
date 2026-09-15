#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // 1. Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare 2D arrays based on user dimensions
    int matrixA[rows][cols];
    int matrixB[rows][cols];
    int result[rows][cols];

    // 2. Input elements for the first matrix
    printf("\nEnter elements for Matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    // 3. Input elements for the second matrix
    printf("\nEnter elements for Matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    // 4. Perform matrix subtraction
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }

    // 5. Display the result matrix
    printf("\nResult Matrix (A - B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
