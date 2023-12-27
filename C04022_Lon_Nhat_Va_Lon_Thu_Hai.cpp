#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int max1 = A[0], max2 = -1;
    for(int i = 1; i < n; i++) {
        if(A[i] > max1) {
            max2 = max1;
            max1 = A[i];
        } else if(A[i] > max2 && A[i] < max1) {
            max2 = A[i];
        }
    }

    printf("%d %d\n", max1, max2);
    return 0;
}

