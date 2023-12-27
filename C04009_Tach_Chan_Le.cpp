#include <stdio.h>

int main() {
    int n, i, A[100], even[100], odd[100], e = 0, o = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        if(A[i] % 2 == 0) {
            even[e] = A[i];
            e++;
        } else {
            odd[o] = A[i];
            o++;
        }
    }
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}

