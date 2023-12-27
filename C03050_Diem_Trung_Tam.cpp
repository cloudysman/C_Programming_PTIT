#include<stdio.h>
#define MAX 100001

void checkTree(int n, int a[], int b[]) {
    int dem[MAX] = {0};
    int count = 0, index = 0;

    for(int i = 0; i < n-1; i++) {
        dem[a[i]]++;
        dem[b[i]]++;
    }

    for(int i = 0; i < MAX; i++) {
        if(dem[i] >= 1) {
            count++;
        }
        if(dem[i] == n-1) {
            index = 1;
        }
    }

    if(index == 1 && count == n) {
        printf("Yes");
    } else {
        printf("No");
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for(int i = 0; i < n-1; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    checkTree(n, a, b);

    return 0;
}

