#include <stdio.h>
#include <math.h>

int digitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sumA = digitSum(a);
    int sumB = digitSum(b);

    if (sumA == sumB) {
        printf("%d %d", a, b);
    } else {
        int max = (sumA > sumB) ? a : b;
        int min = (sumA < sumB) ? a : b;
        printf("%d %d", min, max);
    }

    return 0;
}

