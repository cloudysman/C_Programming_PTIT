#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 1000001

bool prime[MAX];

void SieveOfEratosthenes(int n) {
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

int count_numbers_with_three_divisors(long long L, long long R) {
    int count = 0;
    for (long long p = 2; p * p <= R; p++) {
        if (prime[p]) {
            if (p * p >= L && p * p <= R) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int p = 2; p * p <= MAX; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= MAX; i += p)
                prime[i] = false;
        }
    }
    while (T--) {
        long long L, R;
        scanf("%lld %lld", &L, &R);
        printf("%d\n", count_numbers_with_three_divisors(L, R));
    }
    return 0;
}

