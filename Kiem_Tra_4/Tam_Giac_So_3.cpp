#include <stdio.h>


void printRow(int i) {
    int c = 1;
    for (int j = 1; j <= 2*i + 1; j++){
        printf("%d", c);
        if (j <= (2*i + 1) / 2) c += 2;
        else c -= 2;
    }
}
void printPattern(int n) {
    for (int i = 0; i < n; i++){
        printRow(i);
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printPattern(n);
    return 0;
}

