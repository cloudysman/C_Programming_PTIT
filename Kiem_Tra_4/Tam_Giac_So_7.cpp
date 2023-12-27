#include <stdio.h>

void print_pattern(int n) {
    for (int i = 1; i <= n; i++) {
        int number = i;
        int decrement = n - 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number += decrement--;
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}

