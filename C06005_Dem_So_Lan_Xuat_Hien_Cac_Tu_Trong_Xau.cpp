#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 105

void toLowerCase(char *s)
{
    for (int i = 0; s[i]; i++)
        s[i] = tolower(s[i]);
}

int main()
{
    char s[MAX], words[MAX][MAX];
    int freq[MAX] = {0}, n = 0;

    while (scanf("%s", s) != EOF)
    {
        toLowerCase(s);
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (strcmp(words[i], s) == 0)
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            strcpy(words[n], s);
            freq[n]++;
            n++;
        }
        else
            freq[idx]++;
    }

    for (int i = 0; i < n; i++)
        printf("%s %d\n", words[i], freq[i]);

    return 0;
}

