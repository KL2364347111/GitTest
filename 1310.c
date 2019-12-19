#include<stdio.h>
#include<ctype.h>
#define ll long long
inline read(){
	ll x=0;
	char c=getchar();
	for(;!isdigit(c);c=getchar());
	for(;isdigit(c);c=getchar())
		x=x*10+c-'0';
	return x;
}
inline bool judge(ll x){
	if(x%7==0)
		return true;
	while(x){
		if(x%10==7)
			return true;
		x/=10;
	}
	return false;
}
int main(){
	int k;
	ll x;
	scanf("%d",&k);
	while(k--){
		x=read();
		if(judge(x))
			printf("PASS\n");
		else
			printf("%I64d\n",x);
	}
}
