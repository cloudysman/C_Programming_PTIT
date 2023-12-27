#include <stdio.h>

long long max(long long a, long long b) { return (a > b)? a : b; }

void maxSubArraySum(int a[], int size)
{
    long long max_so_far = a[0];
    long long curr_max = a[0];

    for (int i = 1; i < size; i++)
    {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
    }

    printf("%lld\n", max_so_far);
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int N;
        scanf("%d", &N);

        int A[N];
        for(int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        maxSubArraySum(A, N);
    }

    return 0;
}

