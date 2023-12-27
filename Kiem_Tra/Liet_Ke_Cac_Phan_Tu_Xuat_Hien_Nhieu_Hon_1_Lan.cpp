#include <stdio.h>

int main() {
    int n, i, j, count;
    int A[100], B[100] = {0};

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        B[A[i]]++;
    }

    count = 0;
    for(i = 0; i < 100; i++) {
        if(B[i] > 1) {
            count++;
        }
    }

    printf("%d\n", count);
    for(i = 0; i < 100; i++) {
        if(B[i] > 1) {
            printf("%d ", i);
        }
    }

    return 0;
}

