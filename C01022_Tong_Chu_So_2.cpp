#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}

