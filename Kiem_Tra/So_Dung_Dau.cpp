#include<stdio.h>
#include<stdlib.h>

void printLeaders(int arr[], int size) {
    int max_from_right = arr[size-1];
    int leaders[size];
    int leader_count = 0;
    leaders[leader_count++] = max_from_right;
    for (int i = size-2; i >= 0; i--) {
        if (max_from_right < arr[i]) {           
            max_from_right = arr[i];
            leaders[leader_count++] = max_from_right;
        }
    }
    for (int i = 0; i < leader_count; i++) {
        for (int j = i+1; j < leader_count; j++) {
            if (leaders[i] < leaders[j]) {
                int temp = leaders[i];
                leaders[i] = leaders[j];
                leaders[j] = temp;
            }
        }
    }
    for (int i = 0; i < leader_count; i++) {
        printf("%d ", leaders[i]);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        printLeaders(arr, n);
        printf("\n");
    }
    return 0;
}

