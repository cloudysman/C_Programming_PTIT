#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int n;
    scanf("%d", &n);
    int minU = 50000, minD = 50000;
    int sumU = 0, sumD = 0;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        sumU += a;
        sumD += b;
        minU = MIN(minU, a);
        minD = MIN(minD, b);
    }
    sumU += minD;
    sumD += minU;
    printf("%d", MAX(sumU, sumD));
    return 0;
}

