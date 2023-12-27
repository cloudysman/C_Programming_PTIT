#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a; i++) {
        int count = 0;
        for (int j = i; j > 0 && count < b; j--, count++) {
            printf("%d", j);
        }
        for (int j = 2; count < b; j++, count++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

