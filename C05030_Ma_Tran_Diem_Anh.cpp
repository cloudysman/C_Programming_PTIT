#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<stdbool.h>

typedef long long ll;

void input(int* n) {
    scanf("%d", n);
}

void inputString(char* s) {
    scanf("\n%[^\n]s", s);
}

void writeLongLong(ll x) {
    printf("%lld\n", x);
}

void readTwoInts(int* a, int* b) {
    scanf("%d %d", a, b);
}

ll countDieManh(char s[][1001], int m, int n) {
    ll count = 0;
    for(int i = 0; i < m; i++) {
        int x = 0, y = 0;
        for(int j = 0; j < n; j++) {
            if(s[i][j] == '0') continue;
            for(int h = 0; h < n; h++) {
                if(s[i][j] == '1' && s[i][h] == '2') ++x;
                if(s[i][j] == '2' && s[i][h] == '1') ++x;
            }
            for(int k = 0; k < m; k++) {
                if(s[i][j] == '1' && s[k][j] == '2') ++y;
                if(s[i][j] == '2' && s[k][j] == '1') ++y;
            }
            count += (ll)x * y;
            x = 0, y = 0;
        }
    }
    return count;
}

int main() {
    int t;
    input(&t);
    while(t--) {
        int m, n;
        readTwoInts(&m, &n);
        char s[m][1001];
        for(int i = 0; i < m; i++) inputString(s[i]);
        writeLongLong(countDieManh(s, m, n));
    }
    return 0;
}

