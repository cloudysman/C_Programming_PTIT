#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPalindromeAndSumDivisibleBy10(int n)
{
    int reversedNumber = 0, sum = 0, temp = n;
    while (temp > 0)
    {
        int remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        sum += remainder;
        temp /= 10;
    }

    return (sum % 10 == 0) && (reversedNumber == n);
}

void countNumbers()
{
    int numDigits;
    scanf("%d", &numDigits);
    int count = 0;
    int start = pow(10, numDigits - 1);
    int end = pow(10, numDigits) - 1;
    for (int i = start; i <= end; i++)
        if (isPalindromeAndSumDivisibleBy10(i))
            count++;
    printf("%d\n", count);
}

int main()
{
    int testCases;
    scanf("%d", &testCases);
    while (testCases--)
        countNumbers();
    return 0;
}

