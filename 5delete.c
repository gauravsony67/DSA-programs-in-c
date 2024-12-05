#include <stdio.h>

int main() {
    int n, i, k;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to delete
    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &k);

    // Validate the position
    if (k < 1 || k > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to overwrite the element at position k
    for (i = k - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array
    n--;

    // Print the updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
