#include <stdio.h>

void print_pattern(int n) {
    int c = 1;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", c++);
            }
        } else {
            int temp = c + i - 1;
            for (int j = 1; j <= i; j++) {
                printf("%d ", temp--);
            }
            c += i;
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

