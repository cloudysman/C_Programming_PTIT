#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check1(char s[])
{
    return (s[6] < s[7]) && (s[7] < s[8]) && (s[8] < s[10]) && (s[10] < s[11]);
}

bool check2(char s[])
{
    return (s[6] == s[7] && s[7] == s[8]) && (s[10] == s[11]);
}

bool check3(char s[])
{
    for (int i = 6; i <= 11; i++)
    {
        if (i != 9 && s[i] != '6' && s[i] != '8')
            return false;
    }
    return true;
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char s[1001];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0'; // remove trailing newline
        if (check1(s) || check2(s) || check3(s))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

