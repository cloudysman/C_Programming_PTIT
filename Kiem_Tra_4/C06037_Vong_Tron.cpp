#include<stdio.h>
#include<string.h>

int calculate_shift(char s1[], char s2[], int n);

int main() {
    int n, i, j, check, sum, size, min = 1000;
    scanf("%d", &n);
    char s[n][101];
    for(i = 0; i < n; ++i) {
        scanf("\n%[^\n]s", s[i]);
    }
    size = strlen(s[0]);
    for(i = 0; i < n; ++i) {
        check = 1;
        sum = 0;
        for(j = 0; j < n; j++) {
            if(calculate_shift(s[i], s[j], size) < 0) {
                printf("-1\n");
                check = 0;
                break;
            } else {
                sum += calculate_shift(s[i], s[j], size);
            }
        }
        if(!check) break;
        min = sum < min ? sum : min;
    }
    if(check) printf("%d\n", min);
    return 0;
}

int calculate_shift(char s1[], char s2[], int n) {
    int i, j, p, id;
    for(p = 0; p < n; p++) {
        id = 1;
        for(j = 0; j < n; j++) {
            if(s1[j] != s2[(p + j) % n]) {
                id = 0;
                break;
            }
        }
        if(id) break;
    }
    return id ? p : -1;
}

