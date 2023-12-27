#include<stdio.h>
#include<math.h>

int isSpecialNumber(long long number) {
    int sum = 0;
    long temp = number;
    long long reversedNumber = 0;

    while(number != 0) {
        int digit = number % 10;
        if(digit % 2 == 0) return 0;
        reversedNumber = reversedNumber * 10 + digit;
        sum += digit;
        number = number / 10;
    }

    return ((reversedNumber == temp && sum % 2 != 0) ? 1 : 0);
}

int main() {
    int testCases;
    long long number;

    scanf("%d", &testCases);
    while(testCases--) {	
        scanf("%lld", &number);
        if(isSpecialNumber(number)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

