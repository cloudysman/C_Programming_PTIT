#include <stdio.h>
#include <math.h>

int isPerfectSquare(int n) {
    int i = sqrt(n);
    return i*i == n;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if(isPerfectSquare(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

