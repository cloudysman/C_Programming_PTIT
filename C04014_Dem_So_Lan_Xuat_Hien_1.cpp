#include <stdio.h>

#define MAX 100005

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[n];
    int frequency[MAX] = {0};
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        frequency[a[i]]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (frequency[a[i]] > 0)
        {
            printf("%d %d\n", a[i], frequency[a[i]]);
            frequency[a[i]] = 0;
        }
    }
    
    return 0;
}

