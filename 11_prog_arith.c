#include <stdio.h>

int main() {
    int m, n, i, j, choice;
    printf("Enter rows and columns of matrix: ");
    scanf("%d%d", &m, &n);

    int A[m][n], B[m][n], C[m][n];
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++) for (j = 0; j < n; j++) scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < m; i++) for (j = 0; j < n; j++) scanf("%d", &B[i][j]);

    printf("Choose operation: 1.Addition 2.Subtraction 3.Transpose of A: ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2) {
        for (i = 0; i < m; i++) 
            for (j = 0; j < n; j++) 
                C[i][j] = (choice == 1) ? A[i][j] + B[i][j] : A[i][j] - B[i][j];
              //?(if), :(else).
        printf("Result:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) printf("%d ", C[i][j]);
            printf("\n");
        }
    } else if (choice == 3) {
        printf("Transpose of A:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) printf("%d ", A[j][i]);
            printf("\n");
        }
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
