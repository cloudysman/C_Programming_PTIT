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
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        long long ans = 1;
        for (int i = 2; i <= n; i++) {
            ans = lcm(ans, i);
        }
        printf("%lld\n", ans);
    }
    return 0;
}

