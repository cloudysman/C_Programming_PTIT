#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int isTriplet(int arr[], int n) {
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * arr[i];

    qsort(arr, n, sizeof(int), compare);

    for (int i = n - 1; i >= 2; i--) {
        int l = 0;
        int r = i - 1;
        while (l < r) {
            if (arr[l] + arr[r] == arr[i])
                return 1;
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
        }
    }

    return 0;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++)
            scanf("%d", &A[i]);
        printf(isTriplet(A, N) ? "YES\n" : "NO\n");
    }
    return 0;
}

