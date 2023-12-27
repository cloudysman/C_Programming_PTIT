#include <stdio.h>

void print_rectangle(int width, int height) {
    for(int i=0; i<height; i++) {
        for(int j=0; j<width; j++) {
            if(i==0 || i==height-1 || j==0 || j==width-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int width, height;
    scanf("%d %d", &width, &height);
    print_rectangle(width, height);
    return 0;
}

