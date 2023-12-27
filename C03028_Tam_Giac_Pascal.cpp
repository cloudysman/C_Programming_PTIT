#include<stdio.h>

int giaithua(int n) {
    int result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int pascal(int i, int j) {
    return giaithua(i) / (giaithua(j) * giaithua(i - j));
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }

    return 0;
}

