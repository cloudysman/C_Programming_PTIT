#include <stdio.h>
#include <stdlib.h>

long long convert(long long n, int old_digit, int new_digit) {
    long long result = 0, multiplier = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit == old_digit) {
            digit = new_digit;
        }
        result += digit * multiplier;
        multiplier *= 10;
        n /= 10;
    }
    return result;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long X1, X2;
        scanf("%lld %lld", &X1, &X2);
        long long min_sum = convert(X1, 6, 5) + convert(X2, 6, 5);
        long long max_sum = convert(X1, 5, 6) + convert(X2, 5, 6);
        printf("%lld %lld\n", min_sum, max_sum);
    }
    return 0;
}

