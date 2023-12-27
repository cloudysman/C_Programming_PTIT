#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
        i += 6;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            count++;
        }
    }
    printf("%d ", count);
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

