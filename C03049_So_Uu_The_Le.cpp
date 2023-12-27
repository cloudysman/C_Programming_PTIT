#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char num[20];
        scanf("%s", num);
        int odd = 0, even = 0;
        for (int i = 0; i < strlen(num); i++) {
            int digit = num[i] - '0';
            if (digit % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        if (odd > even && (num[strlen(num) - 1] - '0') % 2 != 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}

