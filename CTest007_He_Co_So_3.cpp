#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 18

int is_valid_number(const char* number) {
    for (int i = 0; i < strlen(number); i++) {
        if (number[i] < '0' || number[i] > '2') {
            return 0;
        }
    }
    return 1;
}

int main() {
    int test_cases;
    scanf("%d", &test_cases);

    char number[MAX_LENGTH];
    for (int i = 0; i < test_cases; i++) {
        scanf("%s", number);
        if (is_valid_number(number)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

