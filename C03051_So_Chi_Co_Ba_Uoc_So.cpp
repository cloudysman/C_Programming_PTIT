#include <stdio.h>
#include <math.h>

int isPrime(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


long long countNumbers(long long L, long long R) {
    long long count = 0;
    for (long long i = sqrt(L); i <= sqrt(R); i++) {
        if (isPrime(i)) count++;
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long L, R;
        scanf("%lld %lld", &L, &R);
        printf("%lld\n", countNumbers(L, R));
    }
    return 0;
}

