#include <stdio.h>
#include <string.h>

#define MAX 55

char inp[MAX][MAX];

int rotate(char a[], char b[]){
	int len = strlen(a);
	for(int i = 0; i < len; ++i){
		int flag = 1;
		for(int j = 0; j < len; ++j){
			if(a[(i+j)%len] != b[j]){
				flag = 0;
				break;
			}
		}
		if(flag) return i;
	}
	return -1;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%s",inp[i]);
	}
	int res=1e9;
	for(int i=0;i<n;++i){
		int cnt=0;
		for(int j=0;j<n;++j){
			if(j!=i){
				int add=rotate(inp[j], inp[i]);
				if(add==-1){
					printf("-1");
					return 0;
				}
				cnt+=add;
			}
		}
		if(cnt < res) res = cnt;
	}
	printf("%d",res);
	return 0;
}

