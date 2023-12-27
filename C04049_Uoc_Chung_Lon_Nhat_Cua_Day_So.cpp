#include<stdio.h>
#include<math.h>

int lcm(int a, int b);
int gcd(int a, int b);

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n+1];
        for(int i = 0; i < n; i++) scanf("%d", &a[i]);
        b[0] = a[0];
        b[n] = a[n-1];
        for(int j = 1; j < n; j++) b[j] = lcm(a[j], a[j-1]);
        for(int i = 0; i <= n; i++) printf("%d ", b[i]);
        printf("\n");
    }
    return 0;
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int gcd(int a, int b)
{
    if(a % b != 0) return gcd(b, a % b);
    return b;
}

