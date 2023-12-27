#include <stdio.h>

int romanToInt(char* s) {
    int values[26] = {0};
    values['I' - 'A'] = 1;
    values['V' - 'A'] = 5;
    values['X' - 'A'] = 10;
    values['L' - 'A'] = 50;
    values['C' - 'A'] = 100;
    values['D' - 'A'] = 500;
    values['M' - 'A'] = 1000;

    int sum = 0;
    int last = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int current = values[s[i] - 'A'];
        if (current > last)
            sum += current - 2 * last;
        else
            sum += current;
        last = current;
    }
    return sum;
}

int main() {
    int t;
    scanf("%d\n", &t);
    char s[105];
    while (t--) {
        scanf("%s", s);
        printf("%d\n", romanToInt(s));
    }
    return 0;
}

