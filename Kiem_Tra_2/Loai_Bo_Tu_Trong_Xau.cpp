#include <stdio.h>
#include <string.h>

int main() {
    char S1[100], S2[100], *p;
    fgets(S1, sizeof(S1), stdin);
    fgets(S2, sizeof(S2), stdin);

    S1[strcspn(S1, "\n")] = 0;
    S2[strcspn(S2, "\n")] = 0;
    while ((p = strstr(S1, S2)) != NULL) {
        memmove(p, p + strlen(S2), strlen(p) - strlen(S2) + 1);
    }

    printf("%s\n", S1);
    return 0;
}

