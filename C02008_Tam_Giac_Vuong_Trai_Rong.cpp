#include <stdio.h>

void print_star(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == n - 1 || j == 0 || j == i) {
                printf("*");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_star(n);
    return 0;
}

