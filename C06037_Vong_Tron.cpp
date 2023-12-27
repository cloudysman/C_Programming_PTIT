#include <stdio.h>
#include <string.h>

#define MAX_CHAR 100

int main() {
    char str[MAX_CHAR];
    fgets(str, MAX_CHAR, stdin);

    int len = strlen(str);
    int result = 0;

    for(int i = 0; i < len; i++) {
        int left = i, right = -1;
        for(int j = i + 1; j < len; j++) {
            if(str[j] == str[i]) {
                right = j;
                break;
            }
        }
        if(right == -1 || right == left + 1) continue;

        int freq[MAX_CHAR] = {0};
        for(int j = left + 1; j < right; j++) {
            freq[str[j]]++;
        }
        for(int j = 'A'; j <= 'Z'; j++) {
            if(freq[j] == 1) result++;
        }
    }
    printf("%d\n", result / 2);

    return 0;
}

