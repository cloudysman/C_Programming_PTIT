#include <stdio.h>
#include <string.h>

#define MAX_WORDS 1005
#define MAX_LENGTH 1005

int find_word(char words[MAX_WORDS][MAX_LENGTH], char word[MAX_LENGTH], int num_words) {
    for (int i = 0; i < num_words; i++) {
        if (strcmp(words[i], word) == 0) {
            return i;
        }
    }
    return -1;
}

void print_max_length_words(char words[MAX_WORDS][MAX_LENGTH], int word_counts[MAX_WORDS], int num_words) {
    int max_length = 0;

    for (int i = 0; i < num_words; i++) {
        int length = strlen(words[i]);
        if (length > max_length) {
            max_length = length;
        }
    }

    for (int i = 0; i < num_words; i++) {
        if (strlen(words[i]) == max_length) {
            printf("%s %d %d\n", words[i], max_length, word_counts[i]);
        }
    }
}

int main() {
    char words[MAX_WORDS][MAX_LENGTH];
    int word_counts[MAX_WORDS] = {0};
    int num_words = 0;
    char word[MAX_LENGTH];

    while (scanf("%s", word) != EOF) {
        int index = find_word(words, word, num_words);
        if (index == -1) {
            strcpy(words[num_words], word);
            word_counts[num_words]++;
            num_words++;
        } else {
            word_counts[index]++;
        }
    }

    print_max_length_words(words, word_counts, num_words);

    return 0;
}

