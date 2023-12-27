#include <stdio.h>

int main() {
    int n, i, j, count;
    int A[100];
    int B[100] = {0};
    int uniqueCount = 0;

    // Nh?p s? ph?n t? c?a m?ng
    scanf("%d", &n);

    // Nh?p các ph?n t? c?a m?ng
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Ð?m s? l?n xu?t hi?n c?a m?i ph?n t?
    for(i = 0; i < n; i++) {
        count = 1;
        if(B[i] == 0) {
            for(j = i + 1; j < n; j++) {
                if(A[i] == A[j]) {
                    count++;
                    B[j] = 1;
                }
            }
            // N?u ph?n t? ch? xu?t hi?n m?t l?n, tang bi?n d?m
            if(count == 1) {
                uniqueCount++;
            }
        }
    }

    // In ra s? lu?ng ph?n t? ch? xu?t hi?n m?t l?n
    printf("%d\n", uniqueCount);

    // In ra các ph?n t? ch? xu?t hi?n m?t l?n
    for(i = 0; i < n; i++) {
        if(B[i] == 0) {
            printf("%d ", A[i]);
        }
    }

    return 0;
}

