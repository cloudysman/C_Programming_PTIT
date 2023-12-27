#include<stdio.h>
#include<math.h>

int isPrime(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return 0;
    }
    return (n > 1 ? 1 : 0);
}

int digitSum(int n) {
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int isFibonacci(int n) {
    int fib[] = {1, 2, 3, 5, 8, 13, 21, 34};
    for(int i = 0; i < 8; i++) {
        if(n == fib[i]) return 1;
    }
    return 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    
    for(int i = min; i <= max; i++) {
        if(isFibonacci(digitSum(i)) && isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

