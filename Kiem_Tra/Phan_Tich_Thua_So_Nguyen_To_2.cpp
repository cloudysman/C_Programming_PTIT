#include <stdio.h>

void prime_factors(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            printf("%d", i);
            n = n / i;
            if (n > 1) {
                printf("x");
            }
        }
    }
    if (n > 1) {
        printf("%d", n);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    prime_factors(n);
    return 0;
}

