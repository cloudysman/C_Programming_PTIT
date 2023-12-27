#include<stdio.h>

void print_char(int start, int end) {
    for(int i = start; i >= end; i--) {
        printf("%c", i);
    }
}

void print_repeat_char(int ch, int times) {
    for(int i = 0; i < times; i++) {
        printf("%c", ch);
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int max = m > n ? m : n;
    int k = 96 + max;

    for(int i = 1; i <= m; i++) {
        if(i < n) {
            print_char(k, k - i + 1);
            print_repeat_char(k - i + 1, n - i);
        } else {
            print_char(k, k - n + 1);
        }
        printf("\n");
    }

    return 0;
}

