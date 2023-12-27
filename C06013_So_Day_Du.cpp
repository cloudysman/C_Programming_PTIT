#include <stdio.h>
#include <string.h>

void solve()
{
    char s[1005] = {};
    scanf("%s", s);
    int count[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[0] == '0' || s[i] < '0' || s[i] > '9')
        {
            printf("INVALID\n");
            return;
        }
        int digit = s[i] - '0';
        count[digit]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (count[i] == 0)
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
        solve();
    return 0;
}

