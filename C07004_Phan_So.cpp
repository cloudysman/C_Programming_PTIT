#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void simplify(int *numerator, int *denominator)
{
    int common_factor = gcd(*numerator, *denominator);
    *numerator /= common_factor;
    *denominator /= common_factor;
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        simplify(&a, &b);
        simplify(&c, &d);

        int denominator = lcm(b, d);
        int numerator1 = a * (denominator / b), numerator2 = c * (denominator / d);

        printf("Case #%d:\n", t);

        printf("%d/%d %d/%d\n", numerator1, denominator, numerator2, denominator);

        int sum_numerator = numerator1 + numerator2;
        simplify(&sum_numerator, &denominator);
        printf("%d/%d\n", sum_numerator, denominator);

        int div_numerator = numerator1, div_denominator = numerator2;
        simplify(&div_numerator, &div_denominator);
        printf("%d/%d\n", div_numerator, div_denominator);
    }
    return 0;
}

