#include<stdio.h>

void printPattern(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = i; j <= n - 1; j++) {
            printf("~");
        }
        for(j = 1; j <= i; j++) {
            printf("%d", 2 * j);
        }
        for(j = 2 * i - 2; j >= 2; j -= 2) {
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

