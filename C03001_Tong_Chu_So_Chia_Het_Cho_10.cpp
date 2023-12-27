#include<stdio.h>

int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    for(int i = 0; i < testCase; i++) {
        int number;
        scanf("%d", &number);

        if (sumDigits(number) % 10 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

