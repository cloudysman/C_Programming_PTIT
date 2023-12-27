#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool ThuanNghich(char s[])
{
    int l = strlen(s);
    for (int i = 0; i < l / 2; i++)
        if (s[i] != s[l - 1 - i])
            return false;
    return true;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    char s[1005];
    int MaxLen = 0;
    char res[1005][1005]; 
    int dd[1005] = {0}; 
    int n = 0;
    while (scanf("%s", s) != -1)
    {
        if (ThuanNghich(s))
        {
            MaxLen = max(MaxLen, strlen(s));
            int xh = -1; // xh: xu?t hi?n
            for (int i = 0; i < n; i++)
                if (strcmp(res[i], s) == 0)
                {
                    xh = i;
                    break;
                }
            if (xh != -1)
                dd[xh]++;
            else
            {
                strcpy(res[n], s);
                dd[n] = 1;
                n++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        if (strlen(res[i]) == MaxLen)
            printf("%s %d\n", res[i], dd[i]);
    return 0;
}

