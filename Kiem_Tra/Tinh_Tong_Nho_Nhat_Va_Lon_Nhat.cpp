#include <stdio.h>
#include <stdlib.h>

long long convert(long long num, int old_digit, int new_digit) {
    long long result = 0, factor = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit == old_digit) {
            digit = new_digit;
        }
        result += digit * factor;
        factor *= 10;
        num /= 10;
    }
    return result;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        long long X1, X2;
        scanf("%lld %lld", &X1, &X2);
        long long min_sum = convert(X1, 6, 5) + convert(X2, 6, 5);
        long long max_sum = convert(X1, 5, 6) + convert(X2, 5, 6);
        printf("%lld %lld\n", min_sum, max_sum);
    }
    return 0;
}

