#include <stdio.h>

void solve()
{
    int n;
    scanf("%d", &n);
    int a[101];
    int frequency[30001] = {0}, max_frequency = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        frequency[a[i]]++;
        if (frequency[a[i]] > max_frequency)
            max_frequency = frequency[a[i]];
    }
    for (int i = 0; i < n; i++)
    {
        if (frequency[a[i]] == max_frequency)
        {
            printf("%d ", a[i]);
            frequency[a[i]] = 0;
        }
    }
    printf("\n");
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--)
        solve();
    return 0;
}

