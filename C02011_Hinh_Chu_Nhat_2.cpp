#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a; i++)
    {
        int j = i;
        int flag = 0, count = 0;
        while (count < b)
        {
            printf("%d", j);
            if (j >= b)
            {
                flag = 1;
                j--;
            }
            else if (flag == 0)
            {
                j++;
            }
            else
            {
                j--;
            }
            count++;
        }
        printf("\n");
    }
    return 0;
}

