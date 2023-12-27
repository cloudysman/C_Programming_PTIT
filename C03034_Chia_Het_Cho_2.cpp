#include <stdio.h>
#include <math.h>

int countDivisors(int n) {
    int count = 0;
    int limit = sqrt(n);
    for (int i = 1; i <= limit; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) count++;
            if ((n / i) != i && (n / i) % 2 == 0) count++;
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        printf("%d\n", countDivisors(N));
    }
    return 0;
}
