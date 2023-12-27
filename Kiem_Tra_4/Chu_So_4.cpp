#include <stdio.h>
#include <math.h>

int is_lucky_number(int num) {
    while (num > 0) {
        if (num % 10 == 4) {
            return 0;
        }
        num /= 10;
    }
    return 1;
}

int is_palindrome(int num) {
    int reversed = 0;
    int original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int is_divisible_by_10(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum % 10 == 0;
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);
    while (test_cases--) {
        int num_digits;
        scanf("%d", &num_digits);
        int start = pow(10, num_digits - 1);
        int end = pow(10, num_digits);
        for (int i = start; i < end; i++) {
            if (is_lucky_number(i) && is_palindrome(i) && is_divisible_by_10(i)) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}

