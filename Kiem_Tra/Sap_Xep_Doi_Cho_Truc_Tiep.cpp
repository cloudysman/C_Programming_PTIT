#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        printf("Buoc %d: ", i+1);
        for (j = 0; j < n; j++)
            printf("%d ", arr[j]);
        printf("\n");
    }
}

int main() {
    int arr[100];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    selectionSort(arr, n);
    return 0;
}

