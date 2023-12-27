#include <stdio.h>
#include <string.h>

int main() {
    char word[101], longest_word[101] = "";
    int max_length = 0;

    while (scanf("%s", word) != EOF) {
        int length = strlen(word);
        if (length > max_length) {
            max_length = length;
            strcpy(longest_word, word);
        }
    }

    printf("%s - %d\n", longest_word, max_length);

    return 0;
}

