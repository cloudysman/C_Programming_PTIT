#include<stdio.h>

void printPattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = (i % 2 == 0 ? 2 : 1); j <= (i % 2 == 0 ? 2 * i : 2 * i - 1); j += 2) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

