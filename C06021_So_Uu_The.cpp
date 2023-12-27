#include <stdio.h>
#include <string.h>

typedef struct {
    int even;
    int odd;
} Count;

Count countDigits(char* s) {
    Count count = {0, 0};
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            count.even = -1;
            break;
        }
        if ((s[i] - '0') % 2 == 0)
            count.even++;
        else
            count.odd++;
    }
    return count;
}

void solve() {
    char s[1001];
    fgets(s, 1001, stdin);
    s[strcspn(s, "\n")] = '\0';  // remove trailing newline
    Count count = countDigits(s);
    if (count.even == -1)
        printf("INVALID\n");
    else if ((strlen(s) % 2 == 0 && count.even > count.odd) || (strlen(s) % 2 != 0 && count.odd > count.even))
        printf("YES\n");
    else
        printf("NO\n");
}

int main() {
    int t;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
        solve();
    return 0;
}

