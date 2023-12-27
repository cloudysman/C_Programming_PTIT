#include <stdio.h>

void shift_array(int arr[], int n, int shift) {
    for (int i = 0; i < shift; i++) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

int main() {
    int n, shift;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &shift);
    shift_array(arr, n, shift);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

