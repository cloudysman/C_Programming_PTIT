#include <stdio.h>

#define MAX_SIZE 100

void read_matrix(int m, int n, int a[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}

void print_transpose(int m, int n, int a[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int a[MAX_SIZE][MAX_SIZE];
    read_matrix(m, n, a);
    print_transpose(m, n, a);
    return 0;
}

