#include <stdio.h>

#define MAX 2000001

int prime[MAX], sum[MAX];

void sieve() {
    for (int i = 2; i < MAX; i++) {
        if (!prime[i]) {
            for (int j = i; j < MAX; j += i) {
                prime[j] = i;
            }
        }
    }
}

void precompute() {
    for (int i = 2; i < MAX; i++) {
        sum[i] = sum[i / prime[i]] + prime[i];
    }
}

int main() {
    sieve();
    precompute();
    int N;
    scanf("%d", &N);
    int result = 0;
    for (int i = 0; i < N; i++) {
        int number;
        scanf("%d", &number);
        result += sum[number];
    }
    printf("%d\n", result);
    return 0;
}

