#include <stdio.h>
#define MAX_SIZE 100

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
   for (int i = 0; i < n-1; i++) {     
       for (int j = 0; j < n-i-1; j++) { 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
       }
   }
}

void sortColumn(int a[MAX_SIZE][MAX_SIZE], int rows, int columns, int index) {
    int column[MAX_SIZE];
    for(int i=0; i<rows; i++)
        column[i] = a[i][index];
    
    bubbleSort(column, rows);
    
    for(int i=0; i<rows; i++)
        a[i][index] = column[i];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int test;
    scanf("%d", &test);
    
    while (test--) {
        int rows, columns;
        scanf("%d %d", &rows, &columns);
        int a[MAX_SIZE][MAX_SIZE];
        int index;
        scanf("%d", &index);
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++ ) {
                scanf("%d", &a[i][j]);
            }
        }
        sortColumn(a, rows, columns, index - 1);
    }
    
    return 0;
}
		
