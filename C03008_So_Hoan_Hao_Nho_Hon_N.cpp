#include <stdio.h>

int isPerfectNumber(int n) {
    int sum = 1;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;

            if (i * i != n) {
                sum += n / i;
            }
        }
    }

    return (sum == n);
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 6; i < n; i++) {
        if (isPerfectNumber(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

