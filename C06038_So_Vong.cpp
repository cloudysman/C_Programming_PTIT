#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdbool.h>

#define MAX_LENGTH 101

bool is_circular_number(char *number);
void print_result(char *number);

int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    
    while(test_cases--)
    {
        char number[MAX_LENGTH];
        scanf("\n%[^\n]s", number);
        print_result(number);
    }
    
    return 0;
}

void print_result(char *number)
{
    if(is_circular_number(number)) 
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
}

bool is_circular_number(char *number)
{
    int length = strlen(number) + 1;
    int i = strlen(number) - 1;
    int digit, remainder = 0;
    
    while(i > -1)
    {
        digit = number[i] - '0';
        if((digit * length + remainder) % 10 != 9) 
        {
            return false;
        }
        remainder = (digit * length + remainder) / 10;
        i--;
    }
    
    return true;
}

