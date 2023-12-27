#include <stdio.h>
#include <math.h>

void find_largest_prime_factor(long long n) {
    long long max_prime = -1;

    while (n % 2 == 0) {
        max_prime = 2;
        n >>= 1; 
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n = n / i;
        }
    }

    if (n > 2)
        max_prime = n;

    printf("%lld\n", max_prime);
}

int main() {
    int t;
    long long n;

    scanf("%d", &t);

    while (t--) {
        scanf("%lld", &n);
        find_largest_prime_factor(n);
    }

    return 0;
}

