#include<stdio.h>

int main()
{
    int t, n, i, j;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int a[n], b[n], c = 0;
        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for(i = 0; i < n; i++)
        {
            int id = 1;
            for(j = i + 1; j < n; j++)
            {
                if(a[j] >= a[i])
                {
                    id = 0;
                    break;
                }
            }
            if(id == 1)
            {
                b[c++] = a[i];
            }
        }
        for(i = 0; i < c; i++)
        {
            for(j = i + 1; j < c; j++)
            {
                if(b[j] > b[i])
                {
                    int temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                }
            }
        }
        for(i = 0; i < c; i++)
        {
            printf("%d ", b[i]);
        }
        printf("\n");
    }
    return 0;
}

