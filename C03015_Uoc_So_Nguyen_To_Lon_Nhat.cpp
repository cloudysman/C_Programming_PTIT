#include<stdio.h>
#include<math.h>

#define N 1000001

int calculateSum(int n);
int isPrimeAndDivisibleBy5(int n);

int main(){
	int testCases;
	long long number;
	scanf("%d",&testCases);
	while(testCases--)
	{
		scanf("%lld",&number);
		int i, largestFactor, sqrtOfNumber = (int)sqrt(number);
		for(i=2; i<=sqrtOfNumber; i++)
		{
			while(number % i == 0)
			{
				number = number / i;
				largestFactor = i;
			}
		}
		if(number != 1){
			printf("%lld\n", number);
		}
		else{
			printf("%d\n", largestFactor);
		}
	}
}

int calculateSum(int n){
	int sum = 0;
	while(n != 0)
	{
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int isPrimeAndDivisibleBy5(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++) 
		if(n % i == 0) 
			return 0;
	return (calculateSum(n) % 5 == 0 ? 1 : 0);
}

