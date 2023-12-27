#include <stdio.h>
#include <ctype.h>
#include <string.h>

void solve()
{
    char s[105];
    fgets(s, sizeof(s), stdin);
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        token[0] = toupper(token[0]);
        for (int j = 1; j < strlen(token); j++)
            token[j] = tolower(token[j]);
        printf("%s ", token);
        token = strtok(NULL, " ");
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        solve();
    return 0;
}

