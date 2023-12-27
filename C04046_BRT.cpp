#include <stdio.h>
#include <stdlib.h>

#define ll long long

int cmp(const void *a, const void *b) {
    return (*(ll*)a - *(ll*)b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ll n, i;
        scanf("%lld", &n);
        ll a[n];
        for (i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        qsort(a, n, sizeof(ll), cmp);
        ll min = a[1] - a[0], count = 1;
        for (i = 2; i < n; i++) {
            if (a[i] - a[i - 1] < min) {
                min = a[i] - a[i - 1];
                count = 1;
            } else if (a[i] - a[i - 1] == min) {
                count++;
            }
        }
        printf("%lld %lld\n", min, count);
    }
    return 0;
}

