#include<stdio.h>

void printPattern(int n) {
    for(int i = 1; i <= n; i++) {
        int j = i;
        int k = n;
        for(int solan = i; solan > 0; solan--) {
            printf("%d ", j);
            j = j + (--k);
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

