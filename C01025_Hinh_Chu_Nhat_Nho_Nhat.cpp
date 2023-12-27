#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    int min_x = (x1 < x3) ? x1 : x3;
    int min_y = (y1 < y3) ? y1 : y3;
    int max_x = (x2 > x4) ? x2 : x4;
    int max_y = (y2 > y4) ? y2 : y4;

    int side = (max_x - min_x > max_y - min_y) ? max_x - min_x : max_y - min_y;
    printf("%d\n", side * side);

    return 0;
}

