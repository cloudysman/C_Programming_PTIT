#include<stdio.h>
#include<math.h>

void factorize(int n) {
    int count;
    for (int i = 2; i <= sqrt(n); i++) {
        count = 0;
        while (n % i == 0) {
            n = n / i;
            count++;
        }
        if (count != 0) {
            printf("%d(%d) ", i, count);
        }
    }
    if (n != 1) {
        printf("%d(1)", n);
    }
    printf("\n");
}

int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        scanf("%d", &n);
        printf("Test %d: ", i);
        factorize(n);
    }
    return 0;
}

