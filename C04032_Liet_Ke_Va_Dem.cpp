#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int value;
    int count;
} Number;

void swap(Number *a, Number *b)
{
    Number tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(Number arr[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[j].count > arr[i].count)
                swap(&arr[i], &arr[j]);
}

void display(Number arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d %d\n", arr[i].value, arr[i].count);
}

int find(Number arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i].value == x)
            return i;
    return -1;
}

bool SoKhongGiam(int x)
{
    if (x < 10)
        return true;
    int z = x % 10;
    x /= 10;
    while (x > 0)
    {
        if (z < x % 10)
            return false;
        z = x % 10;
        x /= 10;
    }
    return true;
}

int main()
{
    Number arr[10000];
    int x, n = 0;
    while (scanf("%d", &x) != -1)
        if (SoKhongGiam(x) == true)
        {
            int vt = find(arr, n, x);
            if (vt == -1)
            {
                arr[n].value = x;
                arr[n].count = 1;
                n++;
            }
            else
                arr[vt].count++;
        }
    sort(arr, n);
    display(arr, n);
    return 0;
}

