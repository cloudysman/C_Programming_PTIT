#include <stdio.h>

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int is_sorted = 1;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                // Swap two elements
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                is_sorted = 0;
            }
        }
        if (is_sorted)
            break;

        printf("Buoc %d: ", i + 1);
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);

    return 0;
}

