#include <stdio.h>
#include <string.h>

void checkPalindrome()
{
    char str[501];
    scanf("%s", str);
    int length = strlen(str);
    int isPalindrome = 1;
    for (int i = 0, j = length - 1; i <= (length / 2 - 1); i++, j--)
    {
        if (str[i] != str[j] || str[i] % 2 != 0)
        {
            isPalindrome = 0;
            break;
        }
    }
    if (length % 2 != 0 && str[length / 2] % 2 != 0)
        isPalindrome = 0;
    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    int testCases;
    scanf("%d", &testCases);
    while (testCases--)
        checkPalindrome();
    return 0;
}

