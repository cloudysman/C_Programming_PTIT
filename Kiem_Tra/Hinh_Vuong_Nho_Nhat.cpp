#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int rect1[4], rect2[4];
    scanf("%d %d %d %d", &rect1[0], &rect1[1], &rect1[2], &rect1[3]);
    scanf("%d %d %d %d", &rect2[0], &rect2[1], &rect2[2], &rect2[3]);

    int min_x = min(min(rect1[0], rect1[2]), min(rect2[0], rect2[2]));
    int max_x = max(max(rect1[0], rect1[2]), max(rect2[0], rect2[2]));
    int min_y = min(min(rect1[1], rect1[3]), min(rect2[1], rect2[3]));
    int max_y = max(max(rect1[1], rect1[3]), max(rect2[1], rect2[3]));

    int side = max(max_x - min_x, max_y - min_y);
    printf("%d\n", side * side);

    return 0;
}

