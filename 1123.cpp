#include<stdio.h>
int main(){
	int k,i,n,m;
	int a[1010];
	scanf("%d",&k);
	while(k--){
		int flag=1;
		scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(i=m+1;i<=n;i++){
			if(a[i]!=a[m]){
				printf("-1\n");
				flag=0;
				break;
			}
		}
		if(flag){
			for(i=m-1;i>0;i--){
				if(a[i]!=a[m]){
					flag=0;
					printf("%d\n",i);
					break;
				}
			}
		}
		if(flag)
			printf("0\n");
	}
}
