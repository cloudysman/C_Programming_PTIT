#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    int chan = 0, le = 0;

    while (N > 0) {
        int digit = N % 10;
        if (digit % 2 == 0) {
            chan++;
        } else {
            le++;
        }
        N /= 10;
    }

    printf("%d %d\n", le, chan);

    return 0;
}

