#include <stdio.h>

int prime_factors(int n) {
    int i = 2;
    int result = 1;
    while (i * i <= n) {
        if (n % i != 0) {
            i++;
        } else {
            n /= i;
            result *= i;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        result *= n;
    }
    return result;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        printf("%d\n", prime_factors(n));
    }
    return 0;
}

