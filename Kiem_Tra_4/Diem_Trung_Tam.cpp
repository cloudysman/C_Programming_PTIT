#include <stdio.h>

#define MAX_SIZE 1000000

int p[MAX_SIZE] = {0};
int a[MAX_SIZE];

void read_array(int n){
	for (int i = 1; i <= 2*n - 2; i++){
		scanf("%d", &a[i]);
	}
}

int check_array(int n){
	int check = 0;
	for (int i = 1; i <= 2*n - 2; i++){
		p[a[i]]++;
		if (p[a[i]] == n - 1) check = 1;
	}
	return check;
}

int main(){
	int n;
	scanf("%d", &n);
	read_array(n);
	if (check_array(n)) printf("Yes"); else printf("No");
	return 0;
}

