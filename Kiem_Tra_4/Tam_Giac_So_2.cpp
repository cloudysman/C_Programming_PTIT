#include <stdio.h>

void printOdd(int n) {
    for (int j = 1; j <= 2 * n - 1; j += 2)
        printf("%d", j);
}

void printEven(int n) {
    for (int j = 2; j <= 2 * n; j += 2)
        printf("%d", j);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            printOdd(i);
        else
            printEven(i);
        printf("\n");
    }
    return 0;
}

