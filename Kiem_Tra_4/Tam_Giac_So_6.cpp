#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j > 0; j--) {
            printf("~");
        }
        int number = 2;
        for (int j = 1; j <= 2*i + 1; j++) {
            printf("%d", number);
            if (j <= (2*i + 1) / 2) {
                number += 2;
            } else {
                number -= 2;
            }
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

