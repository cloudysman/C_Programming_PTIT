#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100], date[100];
    float d1, d2, d3, sum;
} Student;

void init(Student* sv) {
    fflush(stdin);
    scanf("\n%[^\n]s", sv->name);
    scanf("%s", sv->date);
    scanf("%f %f %f", &sv->d1, &sv->d2, &sv->d3);
    sv->sum = sv->d1 + sv->d2 + sv->d3;
}

void printMax(Student sv[], int n) {
    float max = 0;
    for (int i = 0; i < n; i++)
        if (sv[i].sum > max)
            max = sv[i].sum;
    for (int i = 0; i < n; i++)
        if (sv[i].sum == max)
            printf("%d %s %s %.1f\n", i + 1, sv[i].name, sv[i].date, sv[i].sum);
}

int main() {
    int n;
    scanf("%d", &n);
    Student sv[n];
    for (int i = 0; i < n; i++)
        init(&sv[i]);
    printMax(sv, n);
    return 0;
}

