#include <stdio.h>
#include <math.h>

double calculate_distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void process_test_case()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    double d12 = calculate_distance(x1, y1, x2, y2);
    double d23 = calculate_distance(x2, y2, x3, y3);
    double d13 = calculate_distance(x1, y1, x3, y3);

    if ((d12 + d23) > d13 && (d23 + d13) > d12 && (d13 + d12) > d23)
        printf("%.3lf", d12 + d23 + d13);
    else
        printf("INVALID");
    printf("\n");
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        process_test_case();
    }
    return 0;
}

