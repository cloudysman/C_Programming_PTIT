#include <stdio.h>
#include <math.h>

int isPalindrome(int n) {
    int temp = n, reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    return (reversed == temp);
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t, a, b;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &a, &b);
        int count = 0;

        for (int i = a; i <= b; i++) {
            if (isPalindrome(i) && isPrime(i)) {
                printf("%d ", i);
                count++;

                if (count % 10 == 0 && count > 0) {
                    printf("\n");
                }
            }
        }

        printf("\n");
    }

    return 0;
}

