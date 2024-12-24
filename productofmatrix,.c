#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2
