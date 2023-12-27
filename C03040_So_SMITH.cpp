#include<stdio.h>
#include<math.h>

int calculateSum(int number) {
    int total = 0;
    while(number != 0) {
        total += number % 10;
        number = number / 10;
    }
    return total;
}

int main() {
    int number, i, temp, sumOfFactors = 0;
    scanf("%d", &number);
    temp = number;

    for(i = 2; i <= sqrt(number); i++) {
        while(number % i == 0) {
            number = number / i;
            sumOfFactors += calculateSum(i);
        }
    }

    if(number != 1) {
        sumOfFactors += calculateSum(number);
    }

    if(sumOfFactors == calculateSum(temp)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

