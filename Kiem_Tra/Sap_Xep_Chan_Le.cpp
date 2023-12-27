#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int even[n], odd[n], e = 0, o = 0;
    for(int i = 0; i < n; i++) {
        if(A[i] % 2 == 0) {
            even[e++] = A[i];
        } else {
            odd[o++] = A[i];
        }
    }

    qsort(even, e, sizeof(int), compare);
    qsort(odd, o, sizeof(int), compare);

    for(int i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }
    for(int i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
n
