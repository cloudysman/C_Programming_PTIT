#include <stdio.h>

int main() {
    int n, i, j;
    int a[100];
    int count[101] = {0};
    int flag = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    for(i = 0; i < n; i++) {
        if(count[a[i]] > 1) {
            printf("%d ", a[i]);
            count[a[i]] = 0;
            flag = 1;
        }
    }

    if(flag == 0)
        printf("0");

    return 0;
}

