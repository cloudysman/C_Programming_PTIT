#include <stdio.h>

int is_odd_dominant(long long num) {
    int odd_count = 0;
    int even_count = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        num /= 10;
    }
    return odd_count > even_count;
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    for (int i = 0; i < test_cases; i++) {
        long long num;
        scanf("%lld", &num);
        if (is_odd_dominant(num)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

