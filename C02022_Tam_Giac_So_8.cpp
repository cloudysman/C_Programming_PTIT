#include<stdio.h>
#include<math.h>

#define N 1000001

int sum(int n);
int tcschc5(int n);

void printPattern(int n) {
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        int solan = i;
        if(i % 2 != 0) {
            for(int j = solan; j >= 1; j--) {
                printf("%d ", ++cnt);
            }
        } else {
            cnt = solan + cnt;
            for(int j = 1; j <= solan; j++) {
                printf("%d ", cnt - j + 1);
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

int sum(int n) {
    int tong = 0;
    while(n != 0) {
        tong += n % 10;
        n = n / 10;
    }
    return tong;
}

int tcschc5(int n) {
    for(int i = 2; i <= sqrt(n); i++) 
        if(n % i == 0) 
            return 0;
    return (sum(n) % 5 == 0 ? 1 : 0);
}

