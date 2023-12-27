#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int arr[100000];
    int count[100000] = {0};
    int n = 0, i, j;

    while (scanf("%d", &arr[n]) != EOF) {
        for (i = 0; i < n; i++) {
            if (arr[i] == arr[n]) {
                count[i]++;
                n--;
                break;
            }
        }
        n++;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (count[i] < count[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                temp = count[i];
                count[i] = count[j];
                count[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d %d\n", arr[i], count[i] + 1);
    }

    return 0;
}

