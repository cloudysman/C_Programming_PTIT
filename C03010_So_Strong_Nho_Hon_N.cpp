#include <stdio.h>

#define MAX_DIGIT_FACTORIAL 362880 

int factorial(int n, int factorialArr[]) {
    if (n == 0 || n == 1) return 1;

    if (factorialArr[n] != 0) {
        return factorialArr[n];
    }

    factorialArr[n] = n * factorial(n - 1, factorialArr);
    return factorialArr[n];
}

int isStrongNumber(int n, int factorialArr[]) {
    int temp = n;
    int sum = 0;

    do {
        sum += factorial(n % 10, factorialArr);
        n = n / 10;
    } while (n != 0);

    return sum == temp;
}

int main() {
    int n, i;
    scanf("%d", &n);

    int factorialArr[10] = {0}; // Kh?i t?o m?ng giai th?a

    for (i = 1; i < n; i++) {
        if (isStrongNumber(i, factorialArr)) {
            printf("%d ", i);
        }
    }

    return 0;
}

