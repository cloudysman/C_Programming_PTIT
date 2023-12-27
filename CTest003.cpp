#include <stdio.h>
#include <limits.h>

int main() {
    unsigned long long max = 0, min = ULLONG_MAX, num;
    while (scanf("%llu", &num) != EOF) {
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }
    printf("%llu %llu\n", max, min);
    return 0;
}

