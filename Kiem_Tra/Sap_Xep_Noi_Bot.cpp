#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;
    for (i = 0; i < n-1; i++) {
        swapped = 0;
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped) {
            printf("Buoc %d: ", i+1);
            for (j = 0; j < n; j++)
                printf("%d ", arr[j]);
            printf("\n");
        }
        if (!swapped)
            break;
    }
}

int main() {
    int arr[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bubbleSort(arr, n);
    return 0;
}

