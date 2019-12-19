#include<stdio.h>
int main(){
	int num=0,i,k,j,n;
	while(~scanf("%d",&k) && k){
		printf("case %d:\n",++num);
		for(i=1;i<=k;i++){
			for(n=k-i;n>0;n--)
				putchar(' ');
			for(j=0;j<2*i-1;j++)
				printf("%d",i);
			putchar('\n');
		}
	}
}
