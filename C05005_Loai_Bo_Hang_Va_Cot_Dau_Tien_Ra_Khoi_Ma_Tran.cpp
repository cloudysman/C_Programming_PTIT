#include <stdio.h>
#include <stdlib.h>

void readMatrix(int rows, int cols, int** matrix) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}

void printMatrix(int rows, int cols, int** matrix) {
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int m, n;
        scanf("%d%d", &m, &n);
        int** a = (int**)malloc(m * sizeof(int*));
        for(int i = 0; i < m; i++)
            a[i] = (int*)malloc(n * sizeof(int));
        readMatrix(m, n, a);
        printf("Test %d:\n", t);
        printMatrix(m, n, a);
        for(int i = 0; i < m; i++)
            free(a[i]);
        free(a);
    }
    return 0;
}

