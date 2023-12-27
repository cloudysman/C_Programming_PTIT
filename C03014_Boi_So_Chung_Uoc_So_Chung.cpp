#include <stdio.h>

int gcd(int a, int b) {
    while (b > 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(int a, int b) {
    return (long long)a * b / gcd(a, b);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%lld %d\n", lcm(a, b), gcd(a, b));
    }

    return 0;
}

