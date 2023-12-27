#include <stdio.h>

void printPattern(int n) {
    int l = 1, r = 2 * n - 1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        int a = n;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j < l || j >= r)
            {
                printf("%d", a);
                if (j < l) a--;
                else a++;
            }
            else
                printf("%d", a);
        }
        printf("\n");
        if (i < n) {
            l++;
            r--;
        } else {
            l--;
            r++;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

