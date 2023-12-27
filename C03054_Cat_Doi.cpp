#include <stdio.h>
#include <string.h>

void solve(char* num) {
    int len = strlen(num);
    for (int i = 0; i < len; i++) {
        if (num[i] == '0' || num[i] == '1') {
            continue;
        } else if (num[i] == '8' || num[i] == '9') {
            num[i] = '0';
        } else {
            printf("INVALID\n");
            return;
        }
    }
    int start = 0;
    while (num[start] == '0' && start < len) {
        start++;
    }
    if (start == len) {
        printf("INVALID\n");
    } else {
        printf("%s\n", num + start);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char num[20];
        scanf("%s", num);
        solve(num);
    }
    return 0;
}

