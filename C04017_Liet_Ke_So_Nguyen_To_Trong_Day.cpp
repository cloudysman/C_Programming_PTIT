#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void read_array(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int count_primes(int n, int a[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (is_prime(a[i]))
            count++;
    return count;
}

void print_primes(int n, int a[])
{
    for (int i = 0; i < n; i++)
        if (is_prime(a[i]))
            printf(" %d", a[i]);
}

int main()
{
    int n, a[100];
    scanf("%d", &n);
    read_array(n, a);
    printf("%d", count_primes(n, a));
    print_primes(n, a);
    return 0;
}

