#include<stdio.h>
#define mod 100003
int f[1003];
int main(){
	int n,i;
	f[2]=3;
	f[4]=11;
	for(i=6;i<=1000;i+=2){
		f[i]=(4*f[i-2]-f[i-4])%mod;
		if(f[i]<0)
			f[i]+=mod;
	}
	while(~scanf("%d",&n) && n){
		if(n%2){
			printf("0\n");
			continue;
		}
		printf("%d\n",f[n]%mod);
	}
}
