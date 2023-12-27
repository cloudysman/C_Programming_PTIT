#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    int last_digit = N % 10;
    int first_digit;
    while (N > 0) {
        first_digit = N % 10;
        N /= 10;
    }

    printf("%d %d\n", first_digit, last_digit);
    return 0;
}

