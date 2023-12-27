#include <stdio.h>

void count_occurrences(int t, int n, int a[])
{
    int count[100005] = {0};
    for (int i = 0; i < n; i++)
        count[a[i]]++;

    printf("Test %d:\n", t);
    for (int i = 0; i < n; i++)
    {
        if (count[a[i]] != 0)
        {
            printf("%d xuat hien %d lan\n", a[i], count[a[i]]);
            count[a[i]] = 0;
        }
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        count_occurrences(t, n, a);
    }
    return 0;
}

