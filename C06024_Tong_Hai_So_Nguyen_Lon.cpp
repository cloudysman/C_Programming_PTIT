#include <stdio.h>
#include <string.h>

typedef struct {
    char value[505];
} String;

void Swap(String* a, String* b)
{
    String tmp;
    strcpy(tmp.value, a->value);
    strcpy(a->value, b->value);
    strcpy(b->value, tmp.value);
}

int Compare(String* a, String* b)
{
    if (strlen(a->value) > strlen(b->value))
        return 1;
    if (strlen(a->value) < strlen(b->value))
        return -1;
    return strcmp(a->value, b->value);
}

void solve()
{
    String a, b;
    scanf("%s %s", a.value, b.value);
    if (Compare(&a, &b) < 0)
        Swap(&a, &b);

    int i = strlen(a.value) - 1;
    int j = strlen(b.value) - 1;
    char res[505];
    int n = i;
    res[n + 1] = '\0';
    int remember = 0;
    while (j >= 0)
    {
        int digit = (a.value[i--] - '0') + (b.value[j--] - '0') + remember;
        remember = digit / 10;
        res[n--] = digit % 10 + '0';
    }
    while (i >= 0)
    {
        int digit = (a.value[i--] - '0') + remember;
        remember = digit / 10;
        res[n--] = digit % 10 + '0';
    }
    if (remember == 1)
        printf("1");
    puts(res);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
    return 0;
}

