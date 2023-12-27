#include <stdio.h>

void swapColumns(int matrix[50][50], int m, int n, int col1, int col2)
{
    for (int i = 0; i < m; i++)
    {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

void printMatrix(int matrix[50][50], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int matrix[50][50];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int a, b;
    scanf("%d%d", &a, &b);
    swapColumns(matrix, m, n, a - 1, b - 1);
    printMatrix(matrix, m, n);
    return 0;
}

