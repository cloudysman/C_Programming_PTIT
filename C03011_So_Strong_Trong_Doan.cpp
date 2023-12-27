#include <stdio.h>

#define MAX_DIGIT_FACTORIAL 362880 

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int isStrongNumber(int n, int factorialArr[]) {
    int temp = n;
    int sum = 0;

    do {
        sum += factorialArr[n % 10];
        n = n / 10;
    } while (n != 0);

    return sum == temp;
}

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);

    int factorialArr[10];
    for (i = 0; i < 10; i++) {
        factorialArr[i] = factorial(i);
    }

    int min = (a < b ? a : b), max = (a > b ? a : b);

    for (i = min; i <= max; i++) {
        if (isStrongNumber(i, factorialArr)) {
            printf("%d ", i);
        }
    }

    return 0;
}

