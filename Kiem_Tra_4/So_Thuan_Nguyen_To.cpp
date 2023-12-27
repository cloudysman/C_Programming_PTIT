#include <stdio.h>
#include <math.h>

int isPrime(int x){
    if (x < 2) return 0;
    int limit = sqrt(x);
    for (int i = 2; i <= limit; i++)
        if (x % i == 0) return 0;
    return 1;
}

int checkDigitsAndSum(int x){
    int sum = 0;
    while (x){
        int digit = x % 10;
        if (!isPrime(digit)) return 0;
        sum += digit;
        x /= 10;
    }
    return isPrime(sum);
}

int main(){
    int testCases;
    scanf("%d", &testCases);
    while (testCases--){
        int start, end;
        scanf("%d %d", &start, &end);
        int count = 0;
        for (int i = start; i <= end; i++)
            if (checkDigitsAndSum(i) && isPrime(i)) count++;
        printf("%d\n", count);
    }
    return 0;
}

