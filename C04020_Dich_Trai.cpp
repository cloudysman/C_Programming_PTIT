#include <stdio.h>

void rotate(int* a, int n, int k) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[(i + k) % n]);
    }
}

int main() {
    int n, k;
    int a[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    rotate(a, n, k);

    return 0;
}

