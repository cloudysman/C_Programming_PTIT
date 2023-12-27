#include <stdio.h>
#include <string.h>

int is_valid(char s[]) {
    int length = strlen(s);
    int first_digit = s[0] - '0';
    int last_digit = s[length - 1] - '0';

    if (2 * first_digit != last_digit && first_digit != 2 * last_digit) {
        return 0;
    }

    for (int i = 1; i < length / 2; i++) {
        if (s[i] != s[length - 1 - i]) {
            return 0;
        }
    }

    return 1;
}

void process() {
    char s[20];
    scanf("%s", s);

    if (is_valid(s)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++) {
        process();
    }

    return 0;
}

