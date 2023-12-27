#include <stdio.h>
#include <math.h>

void count_powers_of_p(int n, int p) {
    int count = 0;
    for (int i = p; i <= n; i += p) {
        int temp = i;
        while (temp % p == 0) {
            count++;
            temp /= p;
        }
    }
    printf("%d\n", count);
}

int main() {
    int t, n, p;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &p);
        count_powers_of_p(n, p);
    }
    return 0;
}

