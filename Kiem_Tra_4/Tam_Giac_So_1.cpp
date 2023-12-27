#include <stdio.h>

void print_sequence(int n) {
    for (int i = 1; i <= 2*n + 1; i++) {
        printf("%d", i);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        print_sequence(i);
    }
    return 0;
}

