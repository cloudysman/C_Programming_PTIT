#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n = 0, even = 0, odd = 0, num;
        char ch;
        do {
            scanf("%d%c", &num, &ch);
            n++;
            if(num % 2 == 0) even++;
            else odd++;
        } while(ch != '\n');
        
        if((n % 2 == 0 && even > odd) || (n % 2 == 1 && odd > even)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

