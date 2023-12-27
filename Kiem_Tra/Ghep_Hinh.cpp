#include <stdio.h>

int main() {
    int a[3], b[3], i, j, temp;
    int sum_a = 0, sum_b = 0, max_a = 0, max_b = 0;
    for(i = 0; i < 3; i++) {
        scanf("%d %d", &a[i], &b[i]);
        if(a[i] > b[i]) {
            temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
        sum_a += a[i];
        sum_b += b[i];
        if(a[i] > max_a) {
            max_a = a[i];
        }
        if(b[i] > max_b) {
            max_b = b[i];
        }
    }
    if(sum_a != sum_b || max_a != max_b) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

