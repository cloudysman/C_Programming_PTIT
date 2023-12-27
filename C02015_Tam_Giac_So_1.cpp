#include <stdio.h>

void print_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_numbers(n);
    return 0;
}

