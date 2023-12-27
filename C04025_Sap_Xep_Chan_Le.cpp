#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort_and_print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                swap(&arr[i], &arr[j]);
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[101];
    int chan[101], nc = 0;
    int le[101], nl = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            chan[nc++] = a[i];
        else
            le[nl++] = a[i];
    }
    sort_and_print(chan, nc);
    sort_and_print(le, nl);
    return 0;
}

