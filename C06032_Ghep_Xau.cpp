#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char str[200];
} String;

int cmp(const void* a, const void* b) 
{ 
    String* str1 = (String*)a;
    String* str2 = (String*)b;
    char temp1[400], temp2[400];

    strcpy(temp1, str1->str);
    strcat(temp1, str2->str);

    strcpy(temp2, str2->str);
    strcat(temp2, str1->str);

    return strcmp(temp1, temp2);
} 

int main() 
{ 
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        String* arr = (String*)malloc(n * sizeof(String));
        for (int i = 0; i < n; i++)
            scanf("%s", arr[i].str);
        
        qsort(arr, n, sizeof(String), cmp); 

        for (int i = 0; i < n; i++) 
            printf("%s", arr[i].str); 
        printf("\n");

        free(arr);
    }
    return 0; 
} 

