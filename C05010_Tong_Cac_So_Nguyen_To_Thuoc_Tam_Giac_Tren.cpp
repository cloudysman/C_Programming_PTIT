#include<stdio.h>
#include<math.h>
#define MAX 100
int is_prime(int n)
{
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

void read_matrix(int m, int matrix[MAX][MAX])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int sum_of_primes(int m, int matrix[MAX][MAX])
{
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        for(int j = i; j < m; j++)
        {
            if(is_prime(matrix[i][j]))
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int m;
    scanf("%d", &m);
    int matrix[MAX][MAX];
    read_matrix(m, matrix);
    printf("%d", sum_of_primes(m, matrix));
    return 0;
}

