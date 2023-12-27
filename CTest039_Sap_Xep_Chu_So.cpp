#include <stdio.h>

#define MAX_DIGITS 19

void print(long long n) {
	int a[MAX_DIGITS];
	int i = 0;
	int count = 0;
	while (n > 0) {
		a[i] = n % 10;
		n /= 10;
		i++;
		count++;
	}
	for (int i = 1; i < count; i++) {
		int key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
	for (int i = 0; i < count; i++) {
		if (a[i] != 0) {
			printf("%d", a[i]);
		}
	}
}

int main () {
	int test;
	scanf("%d", &test);
	while (test--) {
		long long n;
		scanf("%lld", &n);
		print(n);
		printf("\n");
	}
	return 0;
}

