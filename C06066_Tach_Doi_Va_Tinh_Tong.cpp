#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
#define f(i, a, r) for (ll i = a; i < r; i++)
#define F(i, a, r) for (ll i = a - 1; i >= r; i--)
void bu0(char a[], char b[])
{
    char d[200] = "0";
    char c[200] = "0";
    if (strlen(a) > strlen(b))
    {
        while (strlen(a) > strlen(b))
        {
            strcat(c, b);
            strcpy(b, c);
            strcpy(c, d);
        }
    }
    else if (strlen(a) < strlen(b))
    {
        while (strlen(a) < strlen(b))
        {
            strcat(c, a);
            strcpy(a, c);
            strcpy(c, d);
        }
    }
}
void tinhtong(char a[], char b[], char c[100])
{
    bu0(a, b);
    ll nho = 0;
    F(i, strlen(a), 0)
    {
        ll cs = 0;
        cs += a[i] + b[i] - 96 + nho;
        c[i] = cs % 10 + 48;
        if (cs > 9)
            nho = 1;
        else
            nho = 0;
    }
    char d[200] = "1";
    if (nho == 1)
    {
        strcat(d, c);
        strcpy(c, d);
    }
    printf("%s\n", c);
}
char a[200], f[200];
char z[10001];
char b[200], d[200];
int main()
{
    scanf("%s", &a);
    ll n, h;
    while (strlen(a) > 1)
    {
        n = strlen(a);
        f(i, 0, 200)
        {
            d[i] = z[i];
            b[i] = z[i], f[i] = z[i];
        }
        f(i, 0, n / 2) b[i] = a[i];
        h = 0;
        f(j, n / 2, n)
        {
            d[h] = a[j];
            h++;
        }
        tinhtong(b, d, f);
        strcpy(a, f);
    }
}
