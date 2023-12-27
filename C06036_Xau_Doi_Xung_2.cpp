#include<stdio.h>
#include<string.h>

int main(){
    char s[100001];
    if (fgets(s, 100001, stdin) != NULL) {
        int len = strlen(s);
        if (s[len - 1] == '\n') {
            len--; 
        }
        printf("%d", len - 1);
    }
    return 0;
}

