#include <stdio.h>
long long sum(long long n) {
    return n * (n + 1) / 2;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }
    printf("%lld\n", sum(b) - sum(a - 1));
    return 0;
}

