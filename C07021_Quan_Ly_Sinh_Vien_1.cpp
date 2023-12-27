#include <stdio.h>

typedef struct Student
{
    int id;
    char name[100];
    float a, b, c, sum;
} Student;

void inputStudent(Student* student, int id)
{
    student->id = id;
    scanf("\n%[^\n]s", student->name);
    scanf("%f %f %f", &student->a, &student->b, &student->c);
    student->sum = student->a + student->b + student->c;
}

void updateStudent(Student* student)
{
    scanf("\n%[^\n]s", student->name);
    scanf("%f %f %f", &student->a, &student->b, &student->c);
    student->sum = student->a + student->b + student->c;
}

void swapStudents(Student* student1, Student* student2)
{
    Student temp = *student1;
    *student1 = *student2;
    *student2 = temp;
}

void sortStudents(Student students[], int count)
{
    for (int i = 0; i < count - 1; i++)
        for (int j = i + 1; j < count; j++)
            if (students[j].sum < students[i].sum)
                swapStudents(&students[i], &students[j]);
}

void displayStudents(Student students[], int count)
{
    for (int i = 0; i < count; i++)
        printf("%d %s %.1f %.1f %.1f\n", students[i].id, students[i].name, students[i].a, students[i].b, students[i].c);
}

int main()
{
    int option;
    Student students[100];
    int count = 0;

    while (1)
    {
        scanf("%d", &option);
        switch (option)
        {
            case 1:
            {
                int k;
                scanf("%d", &k);
                for (int i = 0; i < k; i++)
                    inputStudent(&students[count++], count);
                printf("%d\n", k);
                break;
            }
            case 2:
            {
                int k;
                scanf("%d", &k);
                updateStudent(&students[k - 1]);
                printf("%d\n", k);
                break;
            }
            case 3:
                goto end;
        }
    }

end:
    sortStudents(students, count);
    displayStudents(students, count);
    return 0;
}

