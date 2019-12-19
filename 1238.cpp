#include<stdio.h>
#include<ctype.h>
#define N 1000000
#define p 1000000007
long long a[N+10];
long long n[N+10];
inline int read(){
	char c;
	int x=0;
	for(c=getchar();!isdigit(c);c=getchar());
	for(;isdigit(c);c=getchar())
		x=x*10+c-'0';
	return x;
}
int main(){
	a[0]=1;
	n[0]=n[1]=0;
	int k,l;
	register int j;
	for(register int i=1;i<=N;i++)
		a[i]=a[i-1]*2%p;
	for(register int j=2;j<=N;j++)
		n[j]=(n[j-1]+n[j-2]+a[j-2])%p;
	k=read();
	while(k--){
		l=read();
		printf("%I64d\n",n[l]);
	}
}
