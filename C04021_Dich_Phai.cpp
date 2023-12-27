#include <stdio.h>

void rotate(int* a, int n, int k) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[(i + k) % n]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int k;
    scanf("%d", &k);
    rotate(a, n, n - k);
    return 0;
}

