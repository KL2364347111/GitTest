#include<stdio.h>
int main(){
	int num=0,i,k,j;
	while(~scanf("%d",&k) && k){
		printf("Case %d:\n",++num);
		for(i=0;i<3*k;i++){
			for(j=0;j<k;j++)
				printf("XTU");
			putchar('\n');
		}
		putchar('\n');
	}
}
