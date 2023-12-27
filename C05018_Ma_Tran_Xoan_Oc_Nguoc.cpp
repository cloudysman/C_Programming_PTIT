#include <stdio.h>

void printMatrix(int n, int t) {
    int matrix[25][25];
    int value = n * n;
    int rowStart = 0, colStart = 0;
    int rowEnd = n, colEnd = n;

    while (rowStart < rowEnd && colStart < colEnd) {
        for (int i = colStart; i < colEnd; ++i)
            matrix[rowStart][i] = value--;
        rowStart++;

        for (int i = rowStart; i < rowEnd; ++i)
            matrix[i][colEnd - 1] = value--;
        colEnd--;

        if (rowStart < rowEnd) {
            for (int i = colEnd - 1; i >= colStart; --i)
                matrix[rowEnd - 1][i] = value--;
            rowEnd--;
        }

        if (colStart < colEnd) {
            for (int i = rowEnd - 1; i >= rowStart; --i)
                matrix[i][colStart] = value--;
            colStart++;
        }
    }

    printf("Test %d:\n", t);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);
        printMatrix(n, t);
    }
    return 0;
}

