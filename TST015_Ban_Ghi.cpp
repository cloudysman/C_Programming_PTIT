#include <stdio.h>
#include <math.h>

typedef struct {
    float a, b, c;
    float perimeter;
    float area;
} Triangle;

void inputTriangle(Triangle *triangle) {
    scanf("%f%f%f", &triangle->a, &triangle->b, &triangle->c);
    triangle->perimeter = (triangle->a + triangle->b + triangle->c) / 2;
    triangle->area = sqrt(triangle->perimeter * (triangle->perimeter - triangle->a) * (triangle->perimeter - triangle->b) * (triangle->perimeter - triangle->c));
}

void sortTriangles(Triangle triangles[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (triangles[j].area < triangles[i].area) {
                Triangle temp = triangles[i];
                triangles[i] = triangles[j];
                triangles[j] = temp;
            }
        }
    }
}

void displayTriangles(Triangle triangles[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.f %.f %.f\n", triangles[i].a, triangles[i].b, triangles[i].c);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Triangle triangles[n];

    for (int i = 0; i < n; i++) {
        inputTriangle(&triangles[i]);
    }

    sortTriangles(triangles, n);

    displayTriangles(triangles, n);

    return 0;
}

