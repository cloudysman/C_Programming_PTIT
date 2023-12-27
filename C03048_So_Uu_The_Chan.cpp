#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char num[20];
        scanf("%s", num);
        int len = strlen(num), even_count = 0, odd_count = 0;
        for (int i = 0; i < len; i++) {
            int digit = num[i] - '0';
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        if (num[len - 1] % 2 == 0 && even_count > odd_count) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

