#include <stdio.h>
#include <stdbool.h>

bool isNonDecreasing(long long num) {
    int lastDigit = 10; 
    while (num > 0) {
        int digit = num % 10;
        if (digit > lastDigit) {
            return false;
        }
        lastDigit = digit;
        num /= 10;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long num;
        scanf("%lld", &num);
        if (isNonDecreasing(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

