#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_prime_digit(char c) {
    return c == '2' || c == '3' || c == '5' || c == '7';
}

bool is_palindrome_and_prime_digits(char s[500]) {
    int l = strlen(s);
    for (int i = 0; i <= l / 2; i++) {
        if (!is_prime_digit(s[i]) || s[i] != s[l - i - 1])
            return false;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[500];
        scanf("%s", s);
        printf(is_palindrome_and_prime_digits(s) ? "YES\n" : "NO\n");
    }
    return 0;
}

