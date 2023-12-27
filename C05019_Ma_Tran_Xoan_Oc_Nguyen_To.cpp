#include <stdio.h>

#define MAX 1000006

int e[MAX], p[MAX];

void eratosthenes() {
    int i, j, k = 0;
    for (i = 0; i < MAX; i++) e[i] = 1;
    for (i = 2; i * i < MAX; i++)
        if (e[i])
            for (j = i * i; j < MAX; j += i)
                e[j] = 0;
    for (i = 2; i < MAX; i++)
        if (e[i])
            p[k++] = i;
}

void solve(int t) {
    int n, i, j, a[25][25], gt = 0, cot, hang, d = 1;
    scanf("%d", &n);
    cot = hang = n;
    while (d <= n / 2 + 1) {
        for (i = d; i <= cot; i++) a[d][i] = p[gt++];
        for (i = d + 1; i <= hang; i++) a[i][cot] = p[gt++];
        for (i = cot - 1; i >= d; i--) a[hang][i] = p[gt++];
        for (i = hang - 1; i > d; i--) a[i][d] = p[gt++];
        d++, hang--, cot--;
    }
    printf("Test %d:\n", t);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main() {
    int T, t;
    eratosthenes();
    scanf("%d", &T);
    for (t = 1; t <= T; t++) solve(t);
    return 0;
}

