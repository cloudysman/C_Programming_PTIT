#include<stdio.h>
#include<math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int allDigitsPrime(int n) {
    while (n > 0) {
        if (!isPrime(n % 10)) {
            return 0;
        }
        n = n / 10;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, i, count = 0;
        scanf("%d %d", &a, &b);

        for (i = a; i <= b; i++) {
            if (isPrime(i) && allDigitsPrime(i)) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

