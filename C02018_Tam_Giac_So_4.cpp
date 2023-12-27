#include<stdio.h>

void printPattern(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf("~");
        }
        for(j = 1; j <= 2 * i - 1; j += 2) {
            printf("%d", j);
        }
        for(j = 2 * i - 3; j >= 1; j -= 2) {
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

