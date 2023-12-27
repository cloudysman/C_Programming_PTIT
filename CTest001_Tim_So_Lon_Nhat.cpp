#include<stdio.h>

int main() {
    long long max = 0, num;
    while(scanf("%lld", &num) != EOF) {
        if(num > max) {
            max = num;
        }
    }
    printf("%lld\n", max);
    return 0;
}

