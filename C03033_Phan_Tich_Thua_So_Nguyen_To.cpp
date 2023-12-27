#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void primeFactorization(int n) {
    printf("%d = ", n);

    for (int i = 2; i <= n; i++) {
        int count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count > 0) {
            printf("%d^%d", i, count);
            if (n != 1) printf(" * ");
        }
    }

    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        primeFactorization(n);
    }

    return 0;
}

