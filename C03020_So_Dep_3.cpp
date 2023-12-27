#include<stdio.h>

int isPalindrome(long long n) {
    long long temp = n, reversed = 0;
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return n == reversed;
}

int hasDigit6(long long n) {
    while (n != 0) {
        if (n % 10 == 6) return 1;
        n /= 10;
    }
    return 0;
}

int sumOfDigitsIs8(long long n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 10 == 8;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long min = a < b ? a : b;
    long long max = a > b ? a : b;
    for (long long i = min; i <= max; i++) {
        if (sumOfDigitsIs8(i) && isPalindrome(i) && hasDigit6(i)) {
            printf("%lld ", i);
        }
    }
    return 0;
}

