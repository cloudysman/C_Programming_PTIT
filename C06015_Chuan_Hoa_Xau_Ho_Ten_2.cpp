#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[1001];
		scanf("\n%[^\n]s", s);
		int n=strlen(s);
		char full[1001],name[1001];
		int i=0,j=0,k=0,index=0,h=0;
		
		while(s[0]==' '){
			for(j=0;j<n;j++)
			{
				s[j]=s[j+1];
			}
			n--;
		}
		
		
		while(s[n-1]==' ')
		{
			n--;
		}
		
		for(i=1;i<n-1;i++)
		{
			while(s[i]==' '&&s[i-1]==' ')
			{
				for(j=i;j<n;j++)
				{
					s[j]=s[j+1];
				}
				n--;
			}
		}
		
		for(i=0;i<n;i++)
		{
			s[i] = tolower(s[i]);
		}
		
		for(i=1;i<n-1;i++)
		{
			if(s[i-1]==' ') s[i] = toupper(s[i]);
		}
		
		for(i=0;i<n;i++)
		{
			if(s[i]==' ') {
				index=i;
				break;
			}
			name[k++]=toupper(s[i]);
		}
		
		for(i=index+1;i<n;i++)
		{
			full[h++]=s[i];
		}
		full[h++]=',';
		full[h++]=' ';
		for(i=0;i<k;i++)
		{
			full[h++]=name[i];
		}
		full[h]='\0';
		printf("%s\n",full);
	}
	return 0;
}

