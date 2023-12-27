#include<stdio.h>

void printPattern(int m, int n) {
    for(int i = 0; i < m; i++) {
        if(i < n - 1) {
            for(int j = i; j < n; j++) {
                printf("%c", j + 64);
            }
            for(int j = n - i; j < n; j++) {
                printf("%c", 64 + n - 1);
            }
        } else {
            for(int j = 0; j < n; j++) {
                printf("%c", 64 + n - 1);
            }
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    printPattern(m, n);
    return 0;
}

