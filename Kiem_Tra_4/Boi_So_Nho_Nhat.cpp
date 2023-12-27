#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    long long t;
    scanf("%lld", &t);
    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long answer = a;
        for (long long i = a + 1; i <= b; i++) {
            answer = lcm(answer, i);
        }
        printf("%lld\n", answer);
    }
    return 0;
}

