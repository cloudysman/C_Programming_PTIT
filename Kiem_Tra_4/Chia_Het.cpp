#include <stdio.h>

long long countTwos(int x){
	long long count = 0;
	for (int i = 2; i <= x; i += 2){
		int temp = i;
		while (temp % 2 == 0){
			temp /= 2;
			count++;
		}
	}
	return count;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	if (countTwos(n) >= k) 
		printf("Yes\n");
	else 
		printf("No\n");
	return 0;
}

