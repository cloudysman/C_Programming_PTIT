#include <stdio.h>
#include <string.h>

void max_lexicographical_substring(char *s) {
    int n = strlen(s);
    char max_substring[n+1];
    max_substring[0] = '\0';

    for (int i = n - 1; i >= 0; --i) {
        if (max_substring[0] == '\0' || s[i] >= max_substring[0]) {
            memmove(max_substring + 1, max_substring, strlen(max_substring) + 1);
            max_substring[0] = s[i];
        }
    }

    printf("%s\n", max_substring);
}

int main() {
    char s[100001];
    scanf("%s", s);
    max_lexicographical_substring(s);
    return 0;
}

