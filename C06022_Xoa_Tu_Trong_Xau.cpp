#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int t, test = 1;
    scanf("%d", &t);
    while(t--)
    {
        char s1[1001], s2[1001], str1[1001], str2[1001];
        char dem1[1001][1001], dem2[1001][1001];
        int vitri[1001];

        int i, j = 0, n = 0;
        for(i = 0; i < 1001; i++) vitri[i] = 1;
        scanf("\n%[^\n]s", s1);
        scanf("\n%[^\n]s", s2);
        strcpy(str1, s1);
        strcpy(str2, s2);
        for(i = 0; i < strlen(str1); i++){
            if(str1[i] >= 'A' && str1[i] <= 'Z') str1[i] += 32;
        }
        for(i = 0; i < strlen(str2); i++){
            if(str2[i] >= 'A' && str2[i] <= 'Z') str2[i] += 32;
        }
        char *tokencheck = strtok(str1, " ");
        while(tokencheck != NULL)
        {
            strcpy(dem2[n], tokencheck);
            ++n;
            tokencheck = strtok(NULL, " ");
        }
        for(i = 0; i < n; i++)
        {
            if(strcmp(dem2[i], str2) == 0) vitri[i] = 0;
        }
        char *token = strtok(s1, " ");
        while(token != NULL)
        {
            strcpy(dem1[j], token);
            ++j;
            token = strtok(NULL, " ");
        }
        printf("Test %d: ", test++);
        for(i = 0; i < n; i++)
        {
            if(vitri[i]){
                printf("%s ", dem1[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

