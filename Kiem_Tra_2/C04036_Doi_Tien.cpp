#include <stdio.h>

int main() {
    int T, N;
    int denominations[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int num_denominations = sizeof(denominations) / sizeof(denominations[0]);

    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d", &N);
        int count = 0;
        for(int j = num_denominations - 1; j >= 0; j--) {
            count += N / denominations[j];
            N %= denominations[j];
        }
        printf("%d\n", count);
    }

    return 0;
}

