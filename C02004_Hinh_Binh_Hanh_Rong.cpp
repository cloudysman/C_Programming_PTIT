#include <stdio.h>

void print_parallelogram(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++)
            printf("~");
        printf("*");
        if (i != 0 && i != n - 1) {
            for (j = 0; j < n - 2; j++)
                printf(".");
            printf("*");
        } else {
            for (j = 0; j < n - 1; j++)
                printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_parallelogram(n);
    return 0;
}

