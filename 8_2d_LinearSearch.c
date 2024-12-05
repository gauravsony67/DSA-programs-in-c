#include <stdio.h>

int main() {
    int rows, cols, i, j, item, found = 0;

    // Input: dimensions of the 2D array
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input: elements of the 2D array
    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Input: the element to search
    printf("Enter the element to search: ");
    scanf("%d", &item);

    // Linear search
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] == item) {
                printf("Element %d found at position [%d][%d]\n", item, i, j);
                found = 1;
                break;
            }
        }
        if (found) break; // Exit outer loop if element is found
    }

    if (!found) {
        printf("Element %d not found in the array.\n", item);
    }

    return 0;
}
2
