#include <stdio.h>

void phanTich(int n) {
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            printf("%d", i);
            n /= i;
            if (n > 1) {
                printf("x");
            }
        } else {
            i++;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    phanTich(n);
    return 0;
}

