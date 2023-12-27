#include<stdio.h>
#include<math.h>

#define N 1000001

void print_pattern(int n);
int sum_of_digits(int n);
int is_prime_and_sum_divisible_by_five(int n);

int main(){
	int n;
	scanf("%d",&n);
	print_pattern(n);
	return 0;
}

void print_pattern(int n) {
	int i, j, count = 0;
	for(i=1; i<=n; i++) {
		int times=i;
		if(i%2!=0){
			for(j=times; j>=1; j-- ) {
				printf("%c ",++count+96);
			}
		} else {
			count = times + count;
			for(j=1; j<=times; j++) {
				printf("%c ",count-j+1+96);
			}
		}
		printf("\n");
	}
}

int sum_of_digits(int n){
	int sum=0;
	while(n!=0) {
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

int is_prime_and_sum_divisible_by_five(int n) {
	int i;
	for(i=2; i*i<=n; i++) if(n%i==0) return 0;
	return (sum_of_digits(n)%5==0?1:0);
}

