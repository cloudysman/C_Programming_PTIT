#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[100], date[10];
    float d1, d2, d3, sum;
} Student;

void init(Student* sv) {
    fflush(stdin);
    scanf("\n%[^\n]s", sv->name);
    scanf("%s", sv->date);
    scanf("%f %f %f", &sv->d1, &sv->d2, &sv->d3);
    sv->sum = sv->d1 + sv->d2 + sv->d3;
}

void swap(Student* a, Student* b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void sort(Student sv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sv[j].sum > sv[i].sum) {
                swap(&sv[i], &sv[j]);
            }
        }
    }
}

void print(Student sv[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d %s %s %.1f\n", sv[i].id, sv[i].name, sv[i].date, sv[i].sum);
}

int main() {
    int n;
    scanf("%d", &n);
    Student sv[n];
    for (int i = 0; i < n; i++) {
        sv[i].id = i + 1;
        init(&sv[i]);
    }
    sort(sv, n);
    print(sv, n);
    return 0;
}

