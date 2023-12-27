#include <stdio.h>

void print_pattern(int n) {
    for (int i = 0; i < n; i++) {
        int c = 2;
        int mid = (2*i + 1) / 2;
        for (int j = 0; j < 2*i + 1; j++) {
            printf("%d", c);
            if (j < mid) {
                c += 2;
            } else {
                c -= 2;
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

