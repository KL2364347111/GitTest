#include<stdio.h>
#define ll long long
int main(){
	ll f[100];
	ll k;
	f[0]=1;
	f[1]=2;
	int i;
	for(i=2;i<100;i++)
			f[i]=f[i-1]+f[i-2];
	while(scanf("%I64d",&k)==1){
		for(i=0;;i++){
			if(f[i]>k){
				printf("%d\n",i-1);
				break;
			}	
		}
	}
}
