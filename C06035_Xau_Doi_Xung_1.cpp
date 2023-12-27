#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 21

void check_palindrome() {
    char str[MAX_LENGTH];
    fgets(str, MAX_LENGTH, stdin);

    int len = strlen(str) - 1; 
    str[len] = '\0';  

    int i = 0, j = len - 1;
    int turn = 0;

    while (i <= j) {
        if (i == j && turn == 0) {
            turn = 1;
        }
        if (str[i] != str[j]) {
            turn += 1;
        }
        i++;
        j--;
    }

    if (turn == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d\n", &t);

    for (int i = 0; i < t; i++) {
        check_palindrome();
    }

    return 0;
}

