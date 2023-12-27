#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        long long N;
        scanf("%lld", &N);
        int count = 0;
        for (long long i = 1; i <= sqrt(N); i++) {
            if (N % i == 0) {
                if (i % 2 == 0) count++;
                if ((N / i) != i && (N / i) % 2 == 0) count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

