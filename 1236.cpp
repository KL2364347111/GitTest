#include<stdio.h>
unsigned long long f[50],s[50];
int main(){
	__int64 ans,n;
	register int i,j,k; 
	scanf("%d",&k);
	f[0]=1;
	f[1]=2;
	s[0]=1;
	for(register int i=2;i<46;i++)
		f[i]=f[i-1]+f[i-2];
	for(register int i=1;i<46;i++)
		s[i]=s[i-1]*2;
	while(k--){
		scanf("%I64d",&n);
		ans=0;
		for(register int i=45;n>0;i--)
			while(n>=f[i]){
				n-=f[i];
				ans+=s[i];
			}
		printf("%I64d\n",ans);
	}
}
