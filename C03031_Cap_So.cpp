#include <stdio.h>

int findGCD(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (findGCD(a, b) == findGCD(c, d)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

