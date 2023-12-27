#include <stdio.h>
#include <string.h>

#define MAX_CHAR_LENGTH 105

void count_chars(char* input) {
    char current_char = input[0];
    int count = 1;
    for (int i = 1; i < strlen(input); i++) {
        if (input[i] == current_char) {
            count++;
        } else {
            printf("%c%d", current_char, count);
            current_char = input[i];
            count = 1;
        }
    }
    printf("%c%d\n", current_char, count);
}

int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        char input[MAX_CHAR_LENGTH];
        scanf("%s", input);
        count_chars(input);
    }
    return 0;
}

