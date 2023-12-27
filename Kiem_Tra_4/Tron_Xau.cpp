#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

void solve(int n, char s1[MAX_SIZE], char s2[MAX_SIZE], char s[MAX_SIZE]){
    char t[MAX_SIZE] = "";
    strcat(t, s1);
    strcat(t, s2);

    int cnt = 0;
    while (1){
        cnt++;
        char tmp[MAX_SIZE] = "";
        for (int i = 0; i < n; i++){
            tmp[2*i] = s2[i];
            tmp[2*i + 1] = s1[i];
        }

        if (!strcmp(tmp, s)){
            printf("%d\n", cnt);
            break;
        }
        if (!strcmp(tmp, t)){
            printf("-1\n");
            break;
        }

        strncpy(s1, tmp, n);
        strncpy(s2, tmp + n, n);
    }
}

int main(){
    while (1){
        int n;
        scanf("%d", &n);
        if (!n) break;

        char s1[MAX_SIZE], s2[MAX_SIZE], s[MAX_SIZE];
        scanf("%s%s%s", s1, s2, s);
        solve(n, s1, s2, s);
    }
    return 0;
}

