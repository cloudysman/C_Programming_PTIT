#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

#define MIN(a, b) ((a) > (b) ? (b) : (a))

void print_pattern(int n) {
    int init;
    int x = n;
    for (int i = 1; i <= (2 * n + 1); i += 2) {
        init = i;
        for (int j = 1; j <= x; j++) {
            printf("%c", init + '@');
            init += 2;
        }
        x--;
        printf("\n");
    }
}

int main() {
    int n;\
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}

