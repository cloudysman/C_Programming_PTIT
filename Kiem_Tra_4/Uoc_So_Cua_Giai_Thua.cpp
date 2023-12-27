#include <stdio.h>

int calculate_legendre(int n, int p)
{
	int count = 0;
	for (int i = p; i <= n; i *= p)
	{
		count += n / i;
	}
	return count;
}

int main()
{
	int test_cases;
	scanf("%d", &test_cases);
	while (test_cases--)
	{
		int n, p;
		scanf("%d %d", &n, &p);
		printf("%d\n", calculate_legendre(n, p));
	}
	return 0;
}

