#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define MAX 100005

ll a[MAX];

int cmp(const void *a, const void *b) {
    return *(ll*)a - *(ll*)b;
}

void solve() {
    ll n, i;
    scanf("%lld", &n);
    for(i = 0; i < n; i++) scanf("%lld", &a[i]);
    qsort(a, n, sizeof(ll), cmp);
    ll minn = 1e18, cnt = 0;
    for(i = 1; i < n; i++) {
        if(a[i] - a[i-1] < minn) {
            minn = a[i] - a[i-1];
            cnt = 1;
        } else if(a[i] - a[i-1] == minn) {
            cnt++;
        }
    }
    printf("%lld %lld\n", minn, cnt);
}

int main() {
    ll t;
    scanf("%lld", &t);
    while(t--) solve();
    return 0;
}

