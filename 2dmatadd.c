#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    // 1. Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    // Declare the 2D arrays with user-defined dimensions
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sum[rows][cols];
    
    // 2. Input elements for the first matrix
    printf("\nEnter elements for the 1st matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // 3. Input elements for the second matrix
    printf("\nEnter elements for the 2nd matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // 4. Add the corresponding elements of both matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // 5. Print the resulting sum matrix
    printf("\nResultant Sum Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); // Newline after completing each row
    }
    
    return 0;
}
