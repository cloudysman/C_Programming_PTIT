#include<stdio.h>

void printPattern(int n) {
    int a[100][100];
    int h1=0,c1=0,hn=2*n-2,cn=2*n-2;
    int temp=n;
    while(n>=1)
    {
        for(int i=c1;i<=cn;i++)
        {
            a[h1][i]=n;
        }
        for(int j=h1+1;j<=hn;j++)
        {
            a[j][cn]=n;
        }
        if(h1!=hn){
            for(int i=cn-1;i>=c1;i--)
            {
                a[hn][i]=n;
            }
        }
        if(c1!=cn)
        {
            for(int j=hn-1;j>h1;j--)
            {
                a[j][c1]=n;
            }
        }
        n--;
        c1++;
        h1++;
        cn--;
        hn--;
    }
    for(int i=0;i<2*temp-1;i++)
    {
        for(int j=0;j<2*temp-1;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    printPattern(n);
    return 0;
}

