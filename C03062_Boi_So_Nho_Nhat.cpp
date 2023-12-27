#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

bool isPrime(int n)
{
    for(int i = 2; i <= sqrt(n); i++) 
        if(n % i == 0) 
            return false;
    return n > 1;
}

long long greatestCommonDivisor(long long a, long long b)
{
    if(a % b != 0) 
        return greatestCommonDivisor(b, a % b);
    else 
        return b;
}

long long leastCommonMultiple(long long a, long long b)
{
    return a * b / (greatestCommonDivisor(a, b));
}

long long result(long long a, long long b)
{
    if(a == b) 
        return b;
    if(b - a == 1) 
        return a * b;
    
    long long result = leastCommonMultiple(a + 1, a);
    for(long long i = a + 1; i <= b; i++)
    {
        result = leastCommonMultiple(result, i);
    }
    return result;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n, m;    
        scanf("%lld %lld", &n, &m);
        printf("%lld\n", result(n, m));
    }
}

