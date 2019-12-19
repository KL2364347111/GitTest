#include<stdio.h>
int c[34][34];
int main(){
	int n,m;
	for(int i=0;i<34;i++)
		c[i][0]=c[i][i]=1;
	for(int i=2;i<34;i++)
		for(int j=1;j<i;j++)
			c[i][j]=c[i-1][j-1]+c[i-1][j];
	int k;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&n,&m);
		if((n%2==0 && m%2) || (n%2 && m%2==0))
			printf("0\n");
		else
			printf("%d\n",c[n][(n-m)/2]);
	} 
}
