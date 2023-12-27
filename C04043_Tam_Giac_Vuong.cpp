#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long a[n];

        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        int found = 0;

        for (int i = 0; i < n && !found; i++)
        {
            for (int j = i + 1; j < n && !found; j++)
            {
                long long sum_of_squares = a[i] * a[i] + a[j] * a[j];
                long long k = sqrt(sum_of_squares);

                if (k * k == sum_of_squares)
                {
                    for (int y = 0; y < n; y++)
                    {
                        if (a[y] == k)
                        {
                            printf("YES\n");
                            found = 1;
                            break;
                        }
                    }
                }
            }
        }

        if (!found)
            printf("NO\n");
    }

    return 0;
}

