#include <stdio.h>

void insertArray(int a[], int b[], int N, int M, int p) {
    for (int i = N; i > p; i--) {
        a[i+M-1] = a[i-1];
    }
    for (int i = 0; i < M; i++) {
        a[p+i] = b[i];
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++) {
        int N, M, p;
        scanf("%d %d %d", &N, &M, &p);
        int a[N+M], b[M];
        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < M; i++) {
            scanf("%d", &b[i]);
        }
        insertArray(a, b, N, M, p);
        printf("Test %d:\n", t+1);
        for (int i = 0; i < N+M; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}

