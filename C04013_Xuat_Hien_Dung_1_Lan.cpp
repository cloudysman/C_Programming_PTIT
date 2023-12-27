#include <stdio.h>

int main() {
    int n, i, count = 0;
    int A[100];
    int mark[100] = {0};

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        mark[A[i]]++;
    }

    for(i = 0; i < n; i++) {
        if(mark[A[i]] == 1) {
            count++;
        }
    }
    printf("%d\n", count);

    for(i = 0; i < n; i++) {
        if(mark[A[i]] == 1) {
            printf("%d ", A[i]);
            mark[A[i]] = 0; 
        }
    }

    return 0;
}

