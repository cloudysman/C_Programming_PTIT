#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool check(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        if (!isPrime(digit)) return false;
        sum += digit;
        n /= 10;
    }
    return isPrime(sum);
}

void sieveOfEratosthenes(int n, bool prime[]) {
    for (int i = 2; i <= n; i++) prime[i] = true;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p) prime[i] = false;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        bool prime[b + 1];
        sieveOfEratosthenes(b, prime);
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (prime[i] && check(i)) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

