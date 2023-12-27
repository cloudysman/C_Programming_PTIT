#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int U, D;
} Person;

int compare(const void *a, const void *b) {
    Person *personA = (Person *)a;
    Person *personB = (Person *)b;
    return (personB->D - personB->U) - (personA->D - personA->U);
}

int main() {
    int N, i;
    scanf("%d", &N);
    Person people[N];
    for(i = 0; i < N; i++) {
        scanf("%d %d", &people[i].U, &people[i].D);
    }
    qsort(people, N, sizeof(Person), compare);
    int time = 0;
    for(i = 0; i < N; i++) {
        if(time + people[i].U < people[i].D) {
            time = people[i].D;
        } else {
            time += people[i].U;
        }
    }
    printf("%d\n", time);
    return 0;
}

