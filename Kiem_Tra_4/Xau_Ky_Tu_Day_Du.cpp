#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000

void calculate_min_alphabets(char* s) {
    int length = strlen(s);
    int dp[MAX_LENGTH] = {0};
    int max = 0;

    for (int i = 0; i < length; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (s[i] > s[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
        if (max < dp[i]) {
            max = dp[i];
        }
    }
    printf("%d\n", 26 - max);
}

int main() {
    char s[MAX_LENGTH];
    scanf("%s", s);
    calculate_min_alphabets(s);
    return 0;
}

