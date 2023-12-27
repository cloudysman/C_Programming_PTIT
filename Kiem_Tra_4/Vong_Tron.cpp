#include <stdio.h>
#include <string.h>

int romanToInt(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100];
        scanf("%s", s);
        int ans = 0;
        for (int i = 0; i < strlen(s); i++) {
            if (i < strlen(s) - 1 && romanToInt(s[i]) < romanToInt(s[i + 1])) {
                ans -= romanToInt(s[i]);
            } else {
                ans += romanToInt(s[i]);
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}

