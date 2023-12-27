#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        int counter = 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            printf("%c", 62 + counter);
            if (j <= (2 * i + 1) / 2) {
                counter += 2;
            } else {
                counter -= 2;
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

