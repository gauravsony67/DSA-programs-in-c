#include <stdio.h>

void mergeArrays(int arr1[], int n, int arr2[], int m, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1 (if any)
    while (i < n) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2 (if any)
    while (j < m) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int n, m, i;

    // Input sizes of arrays
    printf("Enter the size of the first array: ");
    scanf("%d", &n);
    printf("Enter the size of the second array: ");
    scanf("%d", &m);

    int arr1[n], arr2[m], merged[n + m];

    // Input first sorted array
    printf("Enter the elements of the first sorted array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second sorted array
    printf("Enter the elements of the second sorted array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays
    mergeArrays(arr1, n, arr2, m, merged);

    // Print the merged sorted array
    printf("The merged sorted array is:\n");
    for (i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
