#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int arrival;
    int duration;
} Guest;

int compare(const void *a, const void *b) {
    Guest *guestA = (Guest *)a;
    Guest *guestB = (Guest *)b;
    return (guestA->arrival - guestB->arrival);
}

int main() {
    int N, i;
    scanf("%d", &N);
    Guest guests[N];
    for(i = 0; i < N; i++) {
        scanf("%d %d", &guests[i].arrival, &guests[i].duration);
    }
    qsort(guests, N, sizeof(Guest), compare);
    int currentTime = 0;
    for(i = 0; i < N; i++) {
        if(guests[i].arrival > currentTime) {
            currentTime = guests[i].arrival;
        }
        currentTime += guests[i].duration;
    }
    printf("%d\n", currentTime);
    return 0;
}

