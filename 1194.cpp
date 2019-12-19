#include<stdio.h>
const int N=1001;
const int mod=1000000007;
unsigned long long d[N],c[N][N];
int main(){
	d[2]=1;
	for(int i=3;i<N;i++)
		d[i]=(i-1)*(d[i-1]+d[i-2])%mod;
	for(int i=1;i<N;i++)
		c[i][0]=c[i][i]=1;
	for(int i=2;i<N;i++)
		for(int j=1;j<i;j++)
			c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
	int n,k;
	while(~scanf("%d%d",&n,&k),n+k)
		if(!k)
			printf("1\n"); 
		else
			printf("%I64d\n", d[k] * c[n][k] % mod);
}
