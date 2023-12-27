#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int test = 1; test <= t; test++) {
        int n;
        scanf("%d", &n);
        int a[100];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int count[100000] = {0};
        for (int i = 0; i < n; i++) {
            if (is_prime(a[i])) {
                count[a[i]]++;
            }
        }
        printf("Test %d:\n", test);
        for (int i = 0; i < 100000; i++) {
            if (count[i] > 0) {
                printf("%d xuat hien %d lan\n", i, count[i]);
            }
        }
    }
    return 0;
}

