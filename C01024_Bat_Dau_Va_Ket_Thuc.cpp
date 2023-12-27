#include <stdio.h>
#include <stdbool.h>

bool kiem_tra(int n) {
    int so_dau = n;
    while (so_dau >= 10) {
        so_dau /= 10;
    }
    int so_cuoi = n % 10;
    return so_dau == so_cuoi;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        if (kiem_tra(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

