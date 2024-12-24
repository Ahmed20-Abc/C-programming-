#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum diagonal elements
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i];  // Primary diagonal
    }

    printf("Sum of diagonal elements: %d\n", sum);

    return 0;
}
