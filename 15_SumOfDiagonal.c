#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (i = 0; i < n; i++) 
        sum += matrix[i][i];  // Primary diagonal
    

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
