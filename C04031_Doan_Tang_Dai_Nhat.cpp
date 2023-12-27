#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

void solve(int t)
{
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n]; 
    int Maxx = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = (i != 0 && a[i] > a[i - 1]) ? b[i - 1] + 1 : 1;
        Maxx = max(Maxx, b[i]);
    }
    printf("Test %d:\n%d\n", t, Maxx);
    for (int i = 0; i <= n - Maxx; i++)
        if (b[i + Maxx - 1] == Maxx)
        {
            for (int j = 0; j < Maxx; j++)
                printf("%d ", a[i + j]);
            printf("\n");
            i += Maxx - 1;
        }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
        solve(t);
    return 0;
}

