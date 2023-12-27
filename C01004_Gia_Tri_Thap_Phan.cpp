#include<stdio.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		long long N;
		scanf("%lld",&N);
		printf("%.15lf\n",1.0/N);
	}
	return 0;
}
