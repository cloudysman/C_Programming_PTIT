#include<stdio.h>
#include<math.h>

#define N 1000001

int calculateSum(int n);
int isPrimeAndSumDivisibleByFive(int n);

int main(){
	int n, i, count=0;
	scanf("%d",&n);
	for(i=5; i<n; i++)
	{
		if(isPrimeAndSumDivisibleByFive(i)){
			++count;
			printf("%d ",i);
		}
	}
	printf("\n%d",count);
}

int calculateSum(int n){
	int sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

int isPrimeAndSumDivisibleByFive(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++) if(n%i==0) return 0;
	return (calculateSum(n)%5==0?1:0);
}

