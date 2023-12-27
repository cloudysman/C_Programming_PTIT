#include <stdio.h>

void countDigits(int n) {
    int evenCount = 0, oddCount = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;
        n /= 10;
    }
    printf("%d %d\n", oddCount, evenCount);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        countDigits(n);
    }
    return 0;
}

