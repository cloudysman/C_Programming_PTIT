#include <stdio.h>

long long max(long long a, long long b)
{
    return (a > b) ? a : b;
}

void solve()
{
    int n;
    scanf("%d", &n);
    long long a[n];
    long long sum = 0, Maxx = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        sum = max(sum + a[i], 0);
        Maxx = max(Maxx, sum);
    }
    printf("%lld\n", Maxx);
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
        solve();
    return 0;
}

