#include<stdio.h>

void printPattern(int m, int n) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(m - i >= n) {
                printf("%c", n + 64);
            } else {
                if(j < n - m + i) {
                    printf("%c", 64 + m - i + j);
                } else {
                    printf("%c", 64 + n);
                }
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

