#include <stdio.h>
#include <math.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%c", 64);
        for (int j = 2; j <= (i - 1) * 2; j += 2) {
            printf("%c", 64 + j);
        }
        for (int j = (i - 2) * 2; j >= 2; j -= 2) {
            printf("%c", 64 + j);
        }
        if (i != 1) {
            printf("%c", 64);
        }
        printf("\n");
    }
}

int sum_digits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int is_prime_and_sum_divisible_by_5(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return (sum_digits(n) % 5 == 0);
}

int main() {
    int n;
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}

