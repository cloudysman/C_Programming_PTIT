#include <stdio.h>

void swap_rows(int m, int n, int a, int b, int t[50][50]) {
    for (int j = 0; j < n; j++) {
        int temp = t[a - 1][j];
        t[a - 1][j] = t[b - 1][j];
        t[b - 1][j] = temp;
    }
}

void print_matrix(int m, int n, int t[50][50]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int t[50][50];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &t[i][j]);
    int a, b;
    scanf("%d%d", &a, &b);
    swap_rows(m, n, a, b, t);
    print_matrix(m, n, t);
    return 0;
}

