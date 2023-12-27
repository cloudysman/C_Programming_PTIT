#include <stdio.h>
#define MAX 100

int main() {
    int t, n, i, j, a[MAX];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (i = 0, j = n - 1; i <= j; i++, j--) {
            if (a[i] != a[j]) {
                break;
            }
        }
        if (i > j) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

