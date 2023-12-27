#include <stdio.h>

void printNonDecreasing(int arr[], int n) {
    for (int i=0; i<n; i++)
        printf("%d", arr[i]);
    printf(" ");
}

void findNextNonDecreasing(int digit[], int n, int curIndex) {
    if (curIndex == n - 1) {
        printNonDecreasing(digit, n);
        return;
    }

    for (int i = digit[curIndex]; i <= 9; i++) {
        digit[curIndex + 1] = i;
        findNextNonDecreasing(digit, n, curIndex + 1);
    }
}
void findNonDecreasing(int n) {
    int digit[10];

    for (int i = 1; i <= 9; i++) {
        digit[0] = i;
        findNextNonDecreasing(digit, n, 0);
    }
}
int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        findNonDecreasing(n);
        printf("\n");
    }
    return 0;
}

