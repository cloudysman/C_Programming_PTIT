#include <stdio.h>

int main() {
    int t, n, i, j;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n], max = 0, pos[n], k = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] > max) {
                max = a[i];
                k = 0;
                pos[k] = i;
            } else if (a[i] == max) {
                k++;
                pos[k] = i;
            }
        }
        printf("%d\n", max);
        for (j = 0; j <= k; j++)
            printf("%d ", pos[j]);
        printf("\n");
    }
    return 0;
}

