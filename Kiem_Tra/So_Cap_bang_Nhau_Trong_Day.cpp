#include <stdio.h>

void count_pairs(int n, int arr[]) {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            count++;
        }
    }
    printf("%d\n", count);
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    for (int t = 0; t < test_cases; t++) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        count_pairs(n, arr);
    }
    return 0;
}

