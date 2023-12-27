#include <stdio.h>
#include <stdbool.h>

bool prime[1000000];

void sieve() {
    int i, j;
    for(i = 0; i < 1000000; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for(i = 2; i * i < 1000000; i++)
        if(prime[i])
            for(j = i * i; j < 1000000; j += i)
                prime[j] = false;
}

int main() {
    sieve();
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n, i, result = 1;
        scanf("%lld", &n);
        for(i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                result *= i;
                while(n % i == 0) n /= i;
            }
        }
        if(n > 1) result *= n;
        printf("%lld\n", result);
    }
    return 0;
}

