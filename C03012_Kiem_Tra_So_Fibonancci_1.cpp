#include<stdio.h>

int isFibonacci(long long n) {
    long long a = 0, b = 1;

    while (b <= n) {
        if (b == n) {
            return 1; 
        }
        long long temp = b;
        b = a + b;
        a = temp;
    }

    return 0; 
}

int main() {
    long long n;
    scanf("%lld", &n);

    int index = isFibonacci(n);

    printf("%d", index);

    return 0;
}

