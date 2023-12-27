#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

void sort(int a[], int b[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[i]) {
                swap(&a[i], &a[j]);
                swap(&b[i], &b[j]);
            }
        }
    }
}

int main() {
    int n, time = 0;
    scanf("%d", &n);
    int t[n], d[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &t[i], &d[i]);
    }
    sort(t, d, n);
    time = t[0] + d[0];
    for(int i = 1; i < n; i++) {
        time = max(time, t[i]);
        time += d[i];
    }
    printf("%d", time);
    return 0;
}

