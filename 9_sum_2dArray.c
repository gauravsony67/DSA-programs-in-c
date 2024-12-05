#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    // Input the size of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols];

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Calculate the sum of all elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += array[i][j];
        }
    }

    // Print the result
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
