#include<stdio.h>
#include<math.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int k = m > n ? m : n;
    for(int i = 1; i <= m; i++)
    {
        if(m - i > n - 2)
        {
            for(int j = k - i + 1; j > k - i + 1 - n; j--)
            {
                printf("%d", j);
            }
        }
        else
        {
            for(int j = k - i + 1; j >= 1; j--)
            {
                printf("%d", j);
            }
            for(int j = 2; j <= n - k + i; j++)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}

