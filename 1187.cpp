#include<stdio.h>
#define N 1000000007
int main(){
	int n,i;
	unsigned long long a[4],ans;
	while(scanf("%d",&n)==1&&n){
		ans=0;
		a[1]=n/3;
		if(n%3==1){
			a[2]=a[1]+1;
			a[3]=a[1];
		}
		else if(n%3==2){
			a[2]=a[3]=a[1]+1;
		}
		else
			a[2]=a[3]=a[1];
		ans=a[1]*a[2]%N*a[3]%N;
		for(i=1;i<=3;i++)
			ans=(ans+a[i]*(a[i]-1)*(a[i]-2)/6)%N;
		printf("%I64d\n",ans);
	}
}
