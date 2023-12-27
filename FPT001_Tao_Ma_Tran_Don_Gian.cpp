#include <stdio.h>

void print_matrix(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            printf("0 ");
        for (int j = i; j < n; j++)
            printf("%d ", j - i);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_matrix(n);
    return 0;
}

