#include <stdio.h>

void shift_array(int arr[], int n, int shift) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[(i + shift) % n]);
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
    return 0;
}

