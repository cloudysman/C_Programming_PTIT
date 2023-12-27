#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[1000];
    int num;
} Pokemon;

int main() {
    int n;
    scanf("%d", &n);

    Pokemon* pokemons = (Pokemon*) malloc(n * sizeof(Pokemon));

    int k, m;
    int max = 0, total = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", pokemons[i].name);
        scanf("%d %d", &k, &m);

        int cnt = 0;
        while (m / k) {
            int tmp = m / k;
            cnt += tmp;
            m -= tmp * k;
            m += 2 * tmp;
        }
        pokemons[i].num = cnt;
        max = (max < cnt) ? cnt : max;
        total += cnt;
    }

    printf("%d\n", total);

    for (int i = 0; i < n; i++) {
        if (pokemons[i].num == max) {
            printf("%s\n", pokemons[i].name);
            break;
        }
    }

    free(pokemons);
    return 0;
}

