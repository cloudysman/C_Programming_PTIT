#include <stdio.h>

#define MAX 100

void generateFibonacci(int n, int fibo[MAX]) {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n * n; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
}

void printFibonacciMatrix(int n, int fibo[MAX]) {
    int matrix[MAX][MAX], d = 0, row = n - 1, col = n - 1, index = 0;
    while (d <= n / 2) {
        for (int i = d; i <= col; i++)
            matrix[d][i] = fibo[index++];
        for (int i = d + 1; i <= row; i++)
            matrix[i][col] = fibo[index++];
        for (int i = col - 1; i >= d; i--)
            matrix[row][i] = fibo[index++];
        for (int i = row - 1; i > d; i--)
            matrix[i][d] = fibo[index++];
        d++;
        row--;
        col--;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int fibo[MAX];
    generateFibonacci(n, fibo);
    printFibonacciMatrix(n, fibo);
    return 0;
}

