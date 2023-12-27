#include <stdio.h>

int main() {
    int T;
    long long N;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%lld", &N);
        long long square_N = N * N;
        printf("%lld\n", square_N);
    }

    return 0;
}

