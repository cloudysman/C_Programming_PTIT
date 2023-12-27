#include <stdio.h>

void print_tildes(int n) {
    for (int i = 0; i < n; i++) {
        printf("~");
    }
}

void print_numbers(int n) {
    int c = 1;
    for (int i = 1; i <= 2*n + 1; i++){
        printf("%d", c);
        if (i <= (2*n + 1) / 2) c += 2;
        else c -= 2;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        print_tildes(n - i - 1);
        print_numbers(i);
        printf("\n");
    }
    return 0;
}

