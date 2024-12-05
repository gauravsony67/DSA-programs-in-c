#include <stdio.h>

int main() {
    int array[100], n, index = 0, i, j, k;

    // Input the total number of elements
    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Printing elements in pyramid pattern
    printf("\nPyramid Pattern:\n");
    for (i = 1; index < n; i++) {
        // Print spaces for alignment
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }
        
        // Print elements of the current row
        for (k = 0; k < i && index < n; k++) {
            printf("%d   ", array[index++]);
        }
        printf("\n");
    }

    return 0;
}
