#include<stdio.h>
int main(){
	int i,n,k;
	unsigned long long sum;
	while(~scanf("%d",&k) && k){
		sum=0;
		for(i=0;i<k;i++){
			scanf("%d",&n);
			if(n%2==0)
				sum+=n;
		}
		printf("%I64d\n",sum);
	}
}
