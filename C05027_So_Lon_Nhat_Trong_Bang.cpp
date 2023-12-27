#include <stdio.h>

#define MAX_SIZE 100001

typedef long long ll;

ll min(ll a, ll b) {
    return a < b ? a : b;
}

int main() {
    ll n, i, r = 0, c = 0;
    ll t[MAX_SIZE][2];

    scanf("%lld", &n);

    for(i = 0; i < n; i++) {
        scanf("%lld %lld", &t[i][0], &t[i][1]);
    }

    r = t[0][0];
    c = t[0][1];

    for(i = 1; i < n; i++) {
        r = min(t[i][0], r);
        c = min(t[i][1], c);
    }

    printf("%lld\n", r * c);

    return 0;
}

