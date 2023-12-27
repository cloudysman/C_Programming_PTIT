#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long n;
    int count[10] = {0};
    scanf("%lld", &n);
    while (n > 0) {
        int digit = n % 10;
        if (is_prime(digit)) {
            count[digit]++;
        }
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d %d\n", i, count[i]);
        }
    }
    return 0;
}

