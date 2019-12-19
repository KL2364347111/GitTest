#include<stdio.h>
int main(){
	int i,k,n,sum;
	while(~scanf("%d",&k) && k){
		sum=0;
		for(i=0;i<k;i++){
			scanf("%d",&n);
			if(n%2==1)
				sum+=n;
		}
		printf("%d\n",sum);
	}
}
