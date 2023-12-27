#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%d", &N);
        int double_N = N * 2;
        printf("%d\n", double_N);
    }

    return 0;
}

