#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int n) {
    int temp = n, sum = 0;
    while(temp) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == n) ? 1 : 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", isStrong(n));
    return 0;
}

