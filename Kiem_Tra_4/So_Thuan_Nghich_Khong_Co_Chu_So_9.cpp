#include <stdio.h>

int is_palindrome_and_no_9(long long n) {
    long long reversed = 0, original = n;

    while (n > 0) {
        if (n % 10 == 9) return 0;
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return (original == reversed);
}

void print_palindromes_without_9(int n) {
    int count = 0;

    for (long long i = 2; i <= n; i++) {
        if (is_palindrome_and_no_9(i)) {
            printf("%lld ", i);
            count++;
        }
    }

    printf("\n%d\n", count);
}

int main() {
    int n;
    scanf("%d", &n);

    print_palindromes_without_9(n);

    return 0;
}

