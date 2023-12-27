#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, min1 = INT_MAX, min2 = INT_MAX;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if(x < min1) {
            min2 = min1;
            min1 = x;
        } else if(x < min2 && x > min1) {
            min2 = x;
        }
    }
    printf("%d %d\n", min1, min2);
    return 0;
}

