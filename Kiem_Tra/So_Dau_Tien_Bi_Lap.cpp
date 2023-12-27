#include <stdio.h>
#include <stdlib.h>

#define MAX 100001

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int N, i, found = 0;
        int A[MAX] = {0};
        int arr[N];
        scanf("%d", &N);
        for(i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            A[arr[i]]++;
        }
        for(i = 0; i < N; i++) {
            if(A[arr[i]] > 1) {
                printf("%d\n", arr[i]);
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("NO\n");
        }
    }
    return 0;
}

