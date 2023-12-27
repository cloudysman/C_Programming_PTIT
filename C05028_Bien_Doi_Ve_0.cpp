#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void flipMatrix(int matrix[][101], int row, int col) {
    for(int i = 0; i <= row; i++) {
        for(int j = 0; j <= col; j++) 
            matrix[i][j] = matrix[i][j] == 1 ? 0 : 1;
    }
}

bool isZeroMatrix(int matrix[][101], int size) {
    for(int i = size - 1; i >= 0; i--) {
        for(int j = size - 1; j >= 0; j--)
            if(matrix[i][j] != 0) return false;
    }
    return true;
}

void countFlips(int matrix[][101], int size) {
    int count = 0, row = size - 1;
    while(!isZeroMatrix(matrix, size) && row >= 0) {
        for(int i = size - 1; i >= 0; i--) {
            if(matrix[row][i] != 0) {
                flipMatrix(matrix, row, i);
                ++count;
            }
        }
        --row;
    }
    printf("%d\n", count);
}

int main() {
    int size;
    scanf("%d", &size);
    int matrix[size][101];
    char str[1001];
    for(int i = 0; i < size; i++) {
        scanf("\n%[^\n]s", str);
        for(int j = 0; j < strlen(str); j++) 
            matrix[i][j] = str[j] - '0';
    }
    countFlips(matrix, size);
    return 0;
}

