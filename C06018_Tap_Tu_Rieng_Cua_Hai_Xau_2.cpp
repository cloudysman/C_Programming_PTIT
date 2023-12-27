#include<stdio.h>
#include<math.h>
#include<string.h>

#define MAX 205

void swap(char* a, char* b) {
    char temp[MAX];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort(char arr[][MAX], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(arr[i], arr[j]) > 0) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){
    int t, n, m, cnt;
    char s1[MAX], s2[MAX], a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], *tok;

    scanf("%d\n",&t);
    while(t--){
        gets(s1);
        gets(s2);
        tok=strtok(s1," ");
        n=0;
        while(tok!=NULL){
            strcpy(a[n++],tok);
            tok=strtok(NULL," ");
        }
        sort(a, n);
        tok=strtok(s2," ");
        m=0;
        while(tok!=NULL){
            strcpy(b[m++],tok);
            tok=strtok(NULL," ");
        }
        cnt=0;
        for(int i=0; i<n; i++){
            int found = 0;
            for(int j=0; j<m; j++)
                if (!strcmp(a[i],b[j])){
                    found = 1;
                    break;
                }
            if (!found){
                for(int j=0; j<cnt; j++)
                    if (!strcmp(c[j],a[i])){
                        found = 1;
                        break;
                    }
                if (!found) strcpy(c[cnt++],a[i]);
            }
        }
        for(int i=0; i<cnt; i++) printf("%s ",c[i]);
        printf("\n");
    }
}

