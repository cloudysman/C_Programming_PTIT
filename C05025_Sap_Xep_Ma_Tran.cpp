#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortMatrix(int n, int m, int matrix[100][100])
{
    for (int i1 = 0; i1 < n; i1++)
    {
        for (int j1 = 0; j1 < m; j1++)
        {
            for (int i2 = i1; i2 < n; i2++)
            {
                for (int j2 = j1; j2 < m; j2++)
                {
                    if (matrix[i1][j1] > matrix[i2][j2])
                    {
                        swap(&matrix[i1][j1], &matrix[i2][j2]);
                    }
                }
            }
        }
    }
}

void solve(int t)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    sortMatrix(n, m, a);
    
    printf("Test %d:\n", t);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
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

