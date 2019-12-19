#include<stdio.h>
#include<string.h>
#define N 5000000
int num[N+10];
int is_prime[N+10];
int main(){
	int k,x,y;
	memset(is_prime,1,sizeof(is_prime));
	is_prime[0]=is_prime[1]=0;
	num[0]=num[1]=num[2]=0;
	for(register int i=2;i*i<N+10;i++){
		if(!is_prime[i])
			continue;
		for(register int j=i*i;j<N+10;j+=i)
				is_prime[j]=0;
	}
	for(register int i=3;i<N+10;i++)
		(is_prime[i]&&is_prime[i-2])?num[i]=num[i-1]+1:num[i]=num[i-1];
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&x,&y);
		y-x>=2?printf("%d\n",num[y]-num[x+1]):printf("0\n");
	}
}
