#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    float a, b, c, sum;
} Student;

void inputStudent(Student *student, int id) {
    student->id = id;
    scanf("\n%[^\n]s", student->name);
    scanf("%f %f %f", &student->a, &student->b, &student->c);
    student->sum = student->a + student->b + student->c;
}

void updateStudent(Student *student){
    scanf("\n%[^\n]s", student->name);
    scanf("%f %f %f", &student->a, &student->b, &student->c);
    student->sum = student->a + student->b + student->c;
}

void displayStudents(Student students[], int count) {
    for (int i = 0; i < count; i++) {
        if (students[i].a < students[i].b && students[i].b < students[i].c) {
            printf("%d %s %.1f %.1f %.1f\n", students[i].id, students[i].name, students[i].a, students[i].b, students[i].c);
        }
    }
}

int main() {
    int choice;
    Student students[100];
    int count = 0;

    do {
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int k;
                scanf("%d", &k);
                for (int i = 0; i < k; i++) {
                    inputStudent(&students[count++], count);
                }
                printf("%d\n", k);
                break;
            }
            case 2: {
                int k;
                scanf("%d", &k);
                updateStudent(&students[k - 1]);
                printf("%d\n", k);
                break;
            }
            case 3:
                break;
        }
    } while (choice != 3);

    displayStudents(students, count);

    return 0;
}

