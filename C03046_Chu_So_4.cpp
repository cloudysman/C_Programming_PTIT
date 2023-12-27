#include<stdio.h>
#include<math.h>
int a(int n) {
    return (n > 0 && n < 9) ? pow(10, n-1) : 0;
}

int b(int n) {
    return (n > 0 && n < 9) ? pow(10, n) - 1 : 0;
}

int tongchuso(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sothuannghich(int n) {
    int temp = n;
    int s = 0;
    while(n != 0) {
        s = s * 10 + (n % 10);
        n /= 10;
    }
    return s == temp;
}

int smm(int n) {
    if(!sothuannghich(n) || tongchuso(n) % 10 != 0) return 0;
    while(n > 9) {
        if(n % 10 == 4) return 0;
        n /= 10;
    }
    return n != 4;
}

void display(int n) {
    int i;
    for(i = a(n); i <= b(n); i++) {
        if(smm(i)) printf("%d ", i);
    }
}

int main() {
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        display(n);
        printf("\n");
    }
    return 0;
}

