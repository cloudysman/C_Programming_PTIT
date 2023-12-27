#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAX_N 100005

bool is_prime[MAX_N] = {false};

void sieve()
{
    is_prime[2] = true;
    for (int i = 3; i < MAX_N; i += 2)
    {
        is_prime[i] = true;
    }

    for (int i = 3; i * i < MAX_N; i += 2)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < MAX_N; j += 2 * i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int main()
{
    sieve();

    int t;
    scanf("%d", &t);

    for (int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d", &n);

        int a[n + 1];
        int frequency[MAX_N] = {0};

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if (is_prime[a[i]])
            {
                frequency[a[i]]++;
            }
        }

        printf("Test %d:\n", k);

        for (int i = 2; i < MAX_N; i++)
        {
            if (frequency[i] != 0)
            {
                printf("%d xuat hien %d lan\n", i, frequency[i]);
            }
        }
    }

    return 0;
}

