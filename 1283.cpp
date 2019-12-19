#include<stdio.h>
unsigned long long a[70][70];
int main(){
	int i,j,n,k;
	unsigned long long sum;
	for(i=0;i<=65;i++)
		a[i][0]=a[i][i]=1;
	for(i=2;i<=65;i++){
		for(j=1;j<i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	while(~scanf("%d",&n)){
		sum=0;
		for(i=n/2;i<n;i++)
			sum+=a[n-1][i];
		printf("%I64d\n",sum);
	}
}
