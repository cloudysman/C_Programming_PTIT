#include <stdio.h>

int isDecreasing(int n) {
    while(n > 9) {
        if((n % 10) >= ((n / 10) % 10)) 
            return 0;
        n = n / 10;
    }
    return 1;
}
int countDecreasingNumbers(int a, int b) {
    int count = 0;
    for(int i = a; i <= b; i++) {
        if(isDecreasing(i))
            count++;
    }
    return count;
}

int main() {
    int t, a, b;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", countDecreasingNumbers(a, b));
    }
    return 0;
}

