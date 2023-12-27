#include <stdio.h>
#include <string.h>

#define MAX 10005

void process(char *s, int *a) {
    int base = 0, exp = 0;
    int flag = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if ('0' <= s[i] && s[i] <= '9' && !flag)
            base = base * 10 + s[i] - '0';
        else if ('0' <= s[i] && s[i] <= '9' && flag)
            exp = exp * 10 + s[i] - '0';
        else 
            flag = 1;
    }
    a[exp] += base;
}

void solve(char *s, int *a) {
    char *token = strtok(s, " + ");
    while (token != NULL) {
        process(token, a);
        token = strtok(NULL, " + ");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a[MAX] = {0};
        char x[MAX], y[MAX];
        scanf("\n");
        gets(x);
        solve(x, a);
        gets(y);
        solve(y, a);
        int flag = 0;
        for (int i = MAX - 1; i >= 0; i--)
            if (a[i]) {
                if (flag) printf(" + ");
                printf("%d*x^%d", a[i], i);
                flag = 1;
            }
        printf("\n");
    }
    return 0;
}

