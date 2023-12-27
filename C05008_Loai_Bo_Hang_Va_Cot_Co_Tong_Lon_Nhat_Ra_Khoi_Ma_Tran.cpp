#include <stdio.h>

void solve(int t)
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[50][50];
    int maxRowSum = 0, maxColSum = 0;
    int maxRow, maxCol;
    for (int i = 0; i < m; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            rowSum += a[i][j];
        }
        if (rowSum > maxRowSum)
        {
            maxRowSum = rowSum;
            maxRow = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        int colSum = 0;
        for (int i = 0; i < m; i++)
        {
            if (i == maxRow)
                continue;
            colSum += a[i][j];
        }
        if (colSum > maxColSum)
        {
            maxColSum = colSum;
            maxCol = j;
        }
    }
    printf("Test %d:\n", t);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == maxRow || j == maxCol)
                continue;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        solve(t);
    }
    return 0;
}

