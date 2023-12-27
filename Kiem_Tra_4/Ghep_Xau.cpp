#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

void read_strings(int n, char a[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }
}

void swap_strings(char* a, char* b) {
    char tmp[MAX_SIZE];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}

void sort_strings(int n, char a[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            char x[MAX_SIZE], y[MAX_SIZE];
            strcpy(x, a[i]);
            strcat(x, a[j]);
            strcpy(y, a[j]);
            strcat(y, a[i]);
            if (strcmp(x, y) > 0) {
                swap_strings(a[i], a[j]);
            }
        }
    }
}

void print_strings(int n, char a[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < n; i++) {
        printf("%s", a[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        char a[MAX_SIZE][MAX_SIZE];
        scanf("%d", &n);
        read_strings(n, a);
        sort_strings(n, a);
        print_strings(n, a);
    }
    return 0;
}

