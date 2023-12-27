#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sortArray(int arr[101], int n, int ascending)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ascending ? arr[j] < arr[i] : arr[j] > arr[i])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void readArray(int arr[101], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
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
        int a[101], b[101];
        readArray(a, n);
        readArray(b, n);
        sortArray(a, n, 1);
        sortArray(b, n, 0); 
        printf("Test %d:\n", t);
        for (int i = 0; i < n; i++)
        {
            printf("%d %d ", a[i], b[i]);
        }
        printf("\n");
    }
    return 0;
}

