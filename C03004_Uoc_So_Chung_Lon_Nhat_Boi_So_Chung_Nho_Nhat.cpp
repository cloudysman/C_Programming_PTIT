#include <stdio.h>

int ucln(int a, int b)
{
    while (b != 0)
    {
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;
    }
    return a;
}

long long bcnn(int a, int b)
{
    return (long long)a * b / ucln(a, b);
}

int main()
{
    int a, b;
    if (scanf("%d %d", &a, &b) != 2)
    {
        return 1;
    }
    printf("%d\n%lld", ucln(a, b), bcnn(a, b));
    return 0;
}

