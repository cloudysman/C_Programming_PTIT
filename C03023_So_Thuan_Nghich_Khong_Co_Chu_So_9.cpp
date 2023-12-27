#include<stdio.h>

int is_palindrome(int n);
int no_digit_9(int n);

int main()
{
	int n, count = 0;
	scanf("%d",&n);

	for(int i = 2; i <= n; i++)
	{
		if(is_palindrome(i) && no_digit_9(i))
		{
			printf("%d ", i);
			++count;
		}
	}
	printf("\n%d", count);
	return 0;
}

int is_palindrome(int n)
{
	int reversed = 0, temp = n;
	while(n != 0)
	{
		reversed = reversed * 10 + (n % 10);
		n = n / 10;
	}
	return temp == reversed;
}

int no_digit_9(int n)
{
	while(n != 0)
	{
		if(n % 10 == 9) return 0;
		n = n / 10;
	}
	return 1;
}

