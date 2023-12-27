#include <stdio.h>
#include <stdlib.h>

void read_matrix(int rows, int cols, int** matrix) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);
}

void transpose_matrix(int rows, int cols, int** matrix, int** transposed) {
    for (int i = 0; i < cols; i++)
        for (int j = 0; j < rows; j++)
            transposed[i][j] = matrix[j][i];
}

void multiply_matrix(int n, int m, int** a, int** b) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < m; k++)
                sum += a[i][k] * b[k][j];
            printf("%d ", sum);
        }
        printf("\n");
    }
}

void solve(int t) {
    int n, m;
    scanf("%d %d", &n, &m);
    int **a = (int**) malloc(n * sizeof(int*));
    int **b = (int**) malloc(m * sizeof(int*));
    for (int i = 0; i < n; i++)
        a[i] = (int*) malloc(m * sizeof(int));
    for (int i = 0; i < m; i++)
        b[i] = (int*) malloc(n * sizeof(int));
    read_matrix(n, m, a);
    transpose_matrix(n, m, a, b);
    printf("Test %d:\n", t);
    multiply_matrix(n, m, a, b);
    for (int i = 0; i < n; i++)
        free(a[i]);
    for (int i = 0; i < m; i++)
        free(b[i]);
    free(a);
    free(b);
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
        solve(t);
    return 0;
}

