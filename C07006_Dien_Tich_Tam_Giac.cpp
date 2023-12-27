#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

double area(Point A, Point B, Point C) {
    double a = distance(B, C);
    double b = distance(A, C);
    double c = distance(A, B);
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        Point A, B, C;
        scanf("%lf %lf %lf %lf %lf %lf", &A.x, &A.y, &B.x, &B.y, &C.x, &C.y);
        double a = distance(B, C);
        double b = distance(A, C);
        double c = distance(A, B);
        if (a + b <= c || a + c <= b || b + c <= a)
            printf("INVALID\n");
        else
            printf("%.2lf\n", area(A, B, C));
    }
    return 0;
}

