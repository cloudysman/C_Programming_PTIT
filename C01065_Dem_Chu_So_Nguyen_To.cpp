#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    long long n;
    int count[10] = {0};
    scanf("%lld", &n);
    while (n > 0) {
        int digit = n % 10;
        if (isPrime(digit)) count[digit]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) printf("%d %d\n", i, count[i]);
    }
    return 0;
}

