#include<stdio.h>
#include<string.h>
int main(){
	int k,i,l;
	int t[12];
	unsigned long  a,b;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&a,&b);
		int i=0;
		memset(t,0,sizeof(t));
		while(a||b){
			t[i++]=(a+b)%10;
			a/=10;
			b/=10;
		}
		for(l=i-1;t[l]==0;l--);
		for(i=l;i>0;i--)
			printf("%d",t[i]);
		printf("%d\n",t[0]);
	}
}
