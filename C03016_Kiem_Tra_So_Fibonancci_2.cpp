#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX 100

void generate_fibonacci(long long fibonacci[]) {
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i = 2; i < MAX; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
}

int is_fibonacci(long long n, long long fibonacci[]) {
    for(int i = 0; i < MAX; i++) {
        if(n == fibonacci[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int t;
    long long n;
    long long fibonacci[MAX];

    generate_fibonacci(fibonacci);

    scanf("%d", &t);
    while(t--) {
        scanf("%lld", &n);
        if(is_fibonacci(n, fibonacci)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

