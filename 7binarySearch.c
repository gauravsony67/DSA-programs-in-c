#include <stdio.h>

int main() {
    int n, item, low, high, mid, i;

    // Input: size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input: elements of the array (must be sorted)
    printf("Enter %d sorted elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: the item to search
    printf("Enter the item to search: ");
    scanf("%d", &item);

    // Binary search
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == item) {
            printf("Item found at position %d\n", mid + 1); // 1-based index
            return 0;
        } else if (arr[mid] < item) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    // If not found
    printf("Item not found in the array.\n");

    return 0;
}
