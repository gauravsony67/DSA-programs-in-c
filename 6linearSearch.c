#include <stdio.h>

int main() {
    int n, item, i, found = 0;

    // Input: size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input: elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: the item to search
    printf("Enter the item to search: ");
    scanf("%d", &item);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == item) {
            printf("Item found at position %d\n", i + 1); // 1-based index
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Item not found in the array.\n");
    }

    return 0;
}
