#include <stdio.h>
#include <math.h>

long long calculateSquare(long long number)
{
	long long squareRoot = sqrt(number);
	if (squareRoot * squareRoot == number)
		return squareRoot;
	return 0;
}

void swapNumbers(long long *firstNumber, long long *secondNumber)
{
	long long temp = *firstNumber;
	*firstNumber = *secondNumber;
	*secondNumber = temp;
}

int main()
{
	long long a, b, c, d, e, f;
	scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f);
	long long sum = a * b + c * d + e * f;
	long long squareRoot = calculateSquare(sum);
	if (squareRoot == 0)
	{
		printf("NO");
		return 0;
	}
	else
	{
		if (a > b)
			swapNumbers(&a, &b);
		if (c > d)
			swapNumbers(&c, &d);
		if (e > f)
			swapNumbers(&e, &f);

		if (b == d && d == f && f == squareRoot)
			printf("YES");
		else
		{
			if (d == squareRoot)
			{
				swapNumbers(&d, &b);
				swapNumbers(&c, &a);
			}
			if (f == squareRoot)
			{
				swapNumbers(&f, &b);
				swapNumbers(&e, &a);
			}
			if (b == squareRoot)
			{
				a = squareRoot - a;
				if (c == a && e == a || c == a && f == a || d == a && e == a || d == a && f == a)
					printf("YES");
				else
					printf("NO");
			}
			else
				printf("NO");
		}
	}
	return 0;
}

