#include <stdio.h>
#include <string.h>

void check(char *s1, char *s2, char *s, int n)
{
    char a[2000] = "";
    int d, p, i;

    for (d = 0; d <= 2 * n; d++)
    {
        if (strcmp(a, s) == 0)
        {
            printf("%d\n", d);
            return;
        }

        p = 0;
        for (i = 0; i < n; i++)
        {
            a[p++] = s2[i];
            a[p++] = s1[i];
        }

        strncpy(s1, a, n);
        strncpy(s2, a + n, n);
    }

    printf("-1\n");
}

int main()
{
    int n;
    char s1[1000], s2[1000], s[2000];

    while (scanf("%d", &n), n != 0)
    {
        scanf("%s%s%s", s1, s2, s);
        check(s1, s2, s, n);
    }

    return 0;
}

