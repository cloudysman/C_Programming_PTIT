#include <stdio.h>

int isPerfectNumber(int n) {
    int sum = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    if(sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d", isPerfectNumber(N));
    return 0;
}

