#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    int product = 1;
    while (N > 0) {
        product *= N % 10;
        N /= 10;
    }

    printf("%d\n", product);
    return 0;
}

