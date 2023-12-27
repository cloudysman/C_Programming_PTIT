#include<stdio.h>

void printPattern(int m, int n) {
    int i, j;
    char k = 'A';

    for(i = 0; i < m; i++) {
        if(i < n - 1) {
            for(j = 0; j < n - i; j++) {
                printf("%c", j + k + i);
            }
            for(j = i; j > 0; j--) {
                printf("%c", k + j - 1);
            }
        } else {
            for(j = n - 1; j >= 0; j--) {
                printf("%c", j + k);
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

