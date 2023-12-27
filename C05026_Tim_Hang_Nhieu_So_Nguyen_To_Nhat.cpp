#include <stdio.h>
#include <math.h>

#define MAX_SIZE 30

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void readMatrix(int n, int matrix[MAX_SIZE][MAX_SIZE])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
}

int countPrimesInRow(int n, int matrix[MAX_SIZE][MAX_SIZE], int row)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (isPrime(matrix[row][i]))
            count++;
    return count;
}

void printPrimesInRow(int n, int matrix[MAX_SIZE][MAX_SIZE], int row)
{
    for (int i = 0; i < n; i++)
        if (isPrime(matrix[row][i]))
            printf("%d ", matrix[row][i]);
}

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[MAX_SIZE][MAX_SIZE];
    readMatrix(n, matrix);

    int maxCount = 0, maxRow = 0;
    for (int i = 0; i < n; i++)
    {
        int count = countPrimesInRow(n, matrix, i);
        if (count > maxCount)
        {
            maxCount = count;
            maxRow = i;
        }
    }

    printf("%d\n", maxRow + 1);
    printPrimesInRow(n, matrix, maxRow);

    return 0;
}

