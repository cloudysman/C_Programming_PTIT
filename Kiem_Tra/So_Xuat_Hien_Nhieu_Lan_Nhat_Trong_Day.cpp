#include <stdio.h>
#include <string.h>

#define MAX 30001

int main() {
    int t, n, i, j, max, a[101], count[MAX];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        memset(count, 0, sizeof(count));
        max = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            count[a[i]]++;
            if (count[a[i]] > max) {
                max = count[a[i]];
            }
        }
        for (i = 0; i < n; i++) {
            if (count[a[i]] == max) {
                printf("%d ", a[i]);
                count[a[i]] = 0;
            }
        }
        printf("\n");
    }
    return 0;
}

