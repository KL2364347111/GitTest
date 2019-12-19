#include<stdio.h>
long long a[43][43];
int main(){
	int i,j;
	for(i=0;i<=21;i++)
		a[i][i+21]=a[i][21-i]=1;
	for(i=1;i<=21;i++)
		for(j=21-i;j<=20+i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1]+a[i-1][j+1];
	for(i=22;i<=42;i++)
		for(j=i-21;j<=63-i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1]+a[i-1][j+1];
	scanf("%d",&j);
	while(j--){
		scanf("%d",&i);
		printf("%I64d\n",a[i][21]);
	}	
}
