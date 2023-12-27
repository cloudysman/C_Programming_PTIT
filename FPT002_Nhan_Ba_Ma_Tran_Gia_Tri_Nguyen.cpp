#include <stdio.h>
#include <stdlib.h>

void inputMatrix(int rows, int cols, int** matrix) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int m, int n, int p, int** a, int** b, int** result) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int** matrix) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);

    int **a = (int **)malloc(m * sizeof(int *));
    for(int i = 0; i < m; i++)
        a[i] = (int *)malloc(n * sizeof(int));

    int **b = (int **)malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++)
        b[i] = (int *)malloc(p * sizeof(int));

    int **c = (int **)malloc(p * sizeof(int *));
    for(int i = 0; i < p; i++)
        c[i] = (int *)malloc(q * sizeof(int));

    inputMatrix(m, n, a);
    inputMatrix(n, p, b);
    inputMatrix(p, q, c);

    int **res = (int **)malloc(m * sizeof(int *));
    for(int i = 0; i < m; i++)
        res[i] = (int *)malloc(p * sizeof(int));

    multiplyMatrices(m, n, p, a, b, res);

    int **output = (int **)malloc(m * sizeof(int *));
    for(int i = 0; i < m; i++)
        output[i] = (int *)malloc(q * sizeof(int));

    multiplyMatrices(m, p, q, res, c, output);

    printMatrix(m, q, output);

    return 0;
}

