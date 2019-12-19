#include<stdio.h>
unsigned long long a[67][67];
int main(){
	int n,m;
	for(int i=0;i<67;i++)
		a[i][0]=a[i][i]=1;
	for(register int i=2;i<67;i++)
		for(register int j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	while(scanf("%d %d",&n,&m)==2 && (n||m)){
		printf("%I64d\n",a[n+m][m]);
	}
}
