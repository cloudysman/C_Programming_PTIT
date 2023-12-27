#include <stdio.h>
#include <string.h>

#define MAX 61

char num[MAX], temp[MAX];
int len, t, n;

void multiply() {
    int i, carry = 0;
    for (i = 0; i < len; i++) {
        carry += (num[i] - '0') * n;
        temp[i] = (carry % 10) + '0';
        carry /= 10;
    }
    while (carry) {
        temp[i++] = (carry % 10) + '0';
        carry /= 10;
    }
    temp[i] = '\0';
    for (i = 0; i < len; i++) {
        num[i] = temp[i];
    }
}

int check() {
    int i, j, k;
    char original[MAX];
    strcpy(original, num);
    for (i = 1; i <= len; i++) {
        multiply();
        for (j = 0; j < len; j++) {
            temp[j] = num[(j+i)%len];
        }
        temp[len] = '\0';
        if (strcmp(temp, original) == 0) return 1;
    }
    return 0;
}

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%s", num);
        len = strlen(num);
        for (n = 1; n <= len; n++) {
            if (check()) {
                printf("YES\n");
                break;
            }
        }
        if (n > len) printf("NO\n");
    }
    return 0;
}

