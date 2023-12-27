#include <stdio.h>

void print_char_sequence(int start, int end, int step) {
    for (int i = start; i != end; i += step) {
        printf("%c ", 96 + i);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    int start = 1, end;
    for (int i = 1; i <= n; i++) {
        end = start + i;
        if (i % 2 == 1) {
            print_char_sequence(start, end, 1);
        } else {
            print_char_sequence(end - 1, start - 1, -1);
        }
        start = end;
    }

    return 0;
}

