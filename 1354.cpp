#include<stdio.h>
#define mod 1000000007
long long a[101][101];
int main(){
	int k,i,j;
	int x,y;
	for(i=0;i<=100;i++)
		a[i][0]=a[0][i]=1;
	for(i=1;i<=100;i++)
		for(j=1;j<=100;j++)
			a[i][j]=(a[i-1][j-1]+a[i-1][j]+a[i][j-1])%mod;
	scanf("%d",&k);
	while(k--){
		scanf("%d%d",&x,&y);
		printf("%I64d\n",a[x][y]);	
	}
}




