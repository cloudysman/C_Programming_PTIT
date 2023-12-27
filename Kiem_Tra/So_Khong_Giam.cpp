#include <stdio.h>

void find_numbers(int n, int s, int* result, int index) {
    if (n == 0) {
        for (int i = 0; i < index; i++) {
            printf("%d", result[i]);
        }
        printf(" ");
        return;
    }

    for (int i = s; i < 10; i++) {
        result[index] = i;
        find_numbers(n - 1, i, result, index + 1);
    }
}

void list_numbers(int n) {
    int result[10];
    find_numbers(n, 1, result, 0);
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int N;
        scanf("%d", &N);
        list_numbers(N);
    }

    return 0;
}

