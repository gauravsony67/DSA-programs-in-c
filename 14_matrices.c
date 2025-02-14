#include <stdio.h>
#define N 3

int main() {
    int a[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j;

    printf("Upper Triangular:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) 
            printf("%d ", j < i ? 0 : a[i][j]);
        printf("\n");
    }

    printf("Lower Triangular:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) 
            printf("%d ", j > i ? 0 : a[i][j]);
        printf("\n");
    }
    return 0;
}
