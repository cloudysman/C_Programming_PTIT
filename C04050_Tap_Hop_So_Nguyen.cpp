#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    unsigned size;
} Array;

Array input() {
    Array arr = {NULL, 0};
    unsigned ele;
    scanf("%u", &ele);
    for (unsigned i = 0; i < ele; i++) {
        int temp;
        scanf("%d", &temp);
        unsigned j;
        for (j = 0; j < arr.size; j++)
            if (arr.data[j] == temp)
                break;
        if (j != arr.size) continue;
        arr.data = (int*)realloc(arr.data, (arr.size + 1) * sizeof(int));
        arr.data[arr.size++] = temp;
        for (j = arr.size - 1; j > 0 && arr.data[j] < arr.data[j - 1]; j--) {
            int swap = arr.data[j];
            arr.data[j] = arr.data[j - 1];
            arr.data[j - 1] = swap;
        }
    }
    return arr;
}

void print_if_not_same(Array arr, Array same) {
    for (unsigned i = 0; i < arr.size; i++) {
        unsigned j;
        for (j = 0; j < same.size; j++)
            if (arr.data[i] == same.data[j])
                break;
        if (j == same.size) printf("%d ", arr.data[i]);
    }
    putchar('\n');
}

int main() {
    Array arr1 = input();
    Array arr2 = input();
    Array same = {NULL, 0};
    for (unsigned i = 0; i < arr1.size; i++)
        for (unsigned j = 0; j < arr2.size; j++)
            if (arr1.data[i] == arr2.data[j]) {
                printf("%d ", arr1.data[i]);
                same.data = (int*)realloc(same.data, (same.size + 1) * sizeof(int));
                same.data[same.size++] = arr1.data[i];
            }
    printf("\n");
    print_if_not_same(arr1, same);
    print_if_not_same(arr2, same);
    return 0;
}

