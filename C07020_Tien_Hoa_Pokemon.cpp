#include <stdio.h>

typedef struct Pokemon
{
    char species[100];
    int need, have, times;
} PKM;

PKM initPokemon()
{
    PKM p;
    scanf("%s", p.species);
    scanf("%d %d", &p.need, &p.have);
    p.times = 0;
    while (p.have >= p.need)
    {
        p.times += p.have / p.need;
        p.have = p.have % p.need + 2 * (p.have / p.need);
    }
    return p;
}

void display(PKM p[], int count, int pos)
{
    printf("%d\n%s", count, p[pos].species);
}

int main()
{
    int n;
    scanf("%d", &n);
    PKM p[n];
    int count = 0, max = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        p[i] = initPokemon();
        count += p[i].times;
        if (p[i].times > max)
        {
            max = p[i].times;
            pos = i;
        }
    }
    display(p, count, pos);
    return 0;
}

