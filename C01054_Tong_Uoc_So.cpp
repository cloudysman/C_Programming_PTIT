#include <stdio.h>

#define MAX 2000001

int prime[MAX];

void sieve() {
    for (int i = 2; i < MAX; i++) {
        if (prime[i] == 0) {
            prime[i] = i;
            for (int j = i*2; j < MAX; j += i) {
                if (prime[j] == 0) {
                    prime[j] = i;
                }
            }
        }
    }
}

int main() {
    sieve();
    int N;
    scanf("%d", &N);
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        while (num > 1) {
            sum += prime[num];
            num /= prime[num];
        }
    }
    printf("%lld\n", sum);
    return 0;
}

