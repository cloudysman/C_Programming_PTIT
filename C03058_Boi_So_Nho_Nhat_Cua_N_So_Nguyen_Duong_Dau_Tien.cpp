#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

long long leastCommonMultiple(int x, int n) {
    int temp = x;
    while(temp < n) {
        if(temp * x > n) {
            return temp;
        }
        temp *= x;
    }
    return temp;
}

long long calculateResult(int n) {
    long long result = 1;
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) {
            result *= leastCommonMultiple(i, n);
        }
    }
    return result;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", calculateResult(n));
    }
    return 0;
}

