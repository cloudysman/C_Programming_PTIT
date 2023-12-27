#include <stdio.h>

void printPattern(int n) {
    int cs = 1, le = 1;
    for (int i = 1; i <= n; i++) {
        int a = 2;
        for (int j = 1; j <= le; j++) {
            printf("%d", a);
            if (j < cs) {
                a += 2;
            } else if (j >= cs) {
                a -= 2;
            }
        }
        printf("\n");
        le += 2;
        cs += 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

