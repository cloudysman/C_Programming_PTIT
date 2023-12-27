#include<stdio.h>

long long fibo[93];

void precompute() {
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i <= 92; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

int main() {
    precompute();
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibo[n]);
    }
    return 0;
}

