#include <stdio.h>
#include <string.h>

#define MAX_CHAR 100

void calculate_difference(char* str) {
    int n = strlen(str);
    int f[MAX_CHAR] = {0};
    int max = 0;

    for (int i = 0; i < n; i++) {
        f[i] = 1;
        for (int j = 0; j < i; j++) {
            if (str[i] > str[j] && f[i] < f[j] + 1) {
                f[i] = f[j] + 1;
            }
        }
        if (max < f[i]) {
            max = f[i];
        }
    }
    printf("%d\n", 26 - max);
}

int main() {
    char str[MAX_CHAR];
    scanf("%s", str);
    calculate_difference(str);
    return 0;
}

