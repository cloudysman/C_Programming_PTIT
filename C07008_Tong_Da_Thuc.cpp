#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LENGTH 10001

int polynomial[MAX_LENGTH];

void readPolynomial(char s[], int n)
{
    memset(polynomial, 0, sizeof(polynomial));
    int i;
    for(i = 0; i < n; i++)
    {
        int coefficient = 0, power = 0;
        if(isdigit(s[i])){
            while(isdigit(s[i])){
                coefficient = coefficient * 10 + s[i++] - '0';
            }
            i += 3;
            while(isdigit(s[i])){
                power = power * 10 + s[i++] - '0';
            }
            polynomial[power] += coefficient;
        }
    }
}

void printPolynomial()
{
    int count = 0;
    for(int i = MAX_LENGTH; i >= 0; i--){
        if(polynomial[i] != 0) ++count;
    }
    for(int i = MAX_LENGTH; i >= 0; i--){
        if(polynomial[i] != 0 && count > 1) {
            printf("%d*x^%d + ", polynomial[i], i);
            --count;
        }
    }
    for(int i = 0; i <= MAX_LENGTH; i++){
        if(polynomial[i] != 0){
            printf("%d*x^%d", polynomial[i], i);
            break;
        }
    }
    puts("");
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char s1[MAX_LENGTH], s2[MAX_LENGTH], s[5 * MAX_LENGTH];
        scanf("\n%[^\n]s", s1); 
        scanf("\n%[^\n]s", s2);
        strcpy(s, s1);
        strcat(s, " + ");
        strcat(s, s2);
        int n = strlen(s);
        readPolynomial(s, n);
        printPolynomial();
    }
    return 0;
}

