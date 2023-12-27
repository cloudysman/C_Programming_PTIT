#include <stdio.h>
#include <math.h>

int count_divisors(int n) {
    int count = 0;
    int limit = sqrt(n);
    for (int i = 1; i <= limit; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                count++;
            }
            if ((n / i != i) && (n / i) % 2 == 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        printf("%d\n", count_divisors(n));
    }
    return 0;
}

