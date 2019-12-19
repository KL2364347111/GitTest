#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 1000000
inline int read(){
	int x=0;
	char c;
	for(c=getchar();!isdigit(c);c=getchar());
	for(;isdigit(c);c=getchar())
		x=x*10+c-'0';
	return x;
}
int prime[N+10];
bool is_prime[N+10];
int num[N+10];
int main()
{
	int i,j,cnt,x,y,k,sum;
	memset(is_prime,true,sizeof(is_prime));
	is_prime[0]=is_prime[1]=false;
	for(i=2;i<=N;i++){
		if(is_prime[i])
			prime[++cnt]=i;
		for(j=1;j<=cnt &&i*prime[j] <= N; j++){
			is_prime[i*prime[j]] = false;
			if(!(i%prime[j]))
				break;
		}
	}
	for(i=1;prime[i]*prime[i]<=N && i<=cnt;i++){
		for(j=i+1;prime[i]*prime[j]<N && j<=cnt; j++){
			num[prime[i]*prime[j]] = 1;
		}
	}
	for(i=1;i<=N;i++)
		num[i]+=num[i-1];
	k=read();
	while(k--){
		x=read()-1;
		y=read();
		sum=num[y] - num[x];
		printf("%d\n",sum);
	}
}
