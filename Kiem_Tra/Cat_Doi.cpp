#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void cut_in_half(char num[]) {
    char mapping[10] = {'0', '1', 'I', 'I', 'I', 'I', 'I', 'I', '0', '0'};
    char result[19];
    int invalid = 0;
    for (int i = 0; i < strlen(num); i++) {
        if (num[i] < '0' || num[i] > '9' || mapping[num[i] - '0'] == 'I') {
            invalid = 1;
            break;
        }
        result[i] = mapping[num[i] - '0'];
    }
    if (invalid || atoi(result) == 0) {
        printf("INVALID\n");
    } else {
        printf("%d\n", atoi(result));
    }
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        char num[19];
        scanf("%s", num);
        cut_in_half(num);
    }
    return 0;
}

