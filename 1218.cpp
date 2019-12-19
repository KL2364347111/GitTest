#include<stdio.h>
#include<ctype.h>
inline unsigned read(){
	unsigned x=0;
	char c=getchar();
	while(!isdigit(c))
		c=getchar();
	while(isdigit(c))
		x=x*10+c-'0',
		c=getchar();
	return x;
}
 int main(){
 	unsigned a,b,sum,i;
 	int k,cnt,ans;
 	scanf("%d",&k);
 	while(k--){
 		a=read();
 		b=read();
 		sum=a+b;
 		ans=1;
 		for(i=2;i*i<=sum;i++)
 			if(sum%i==0){
 				cnt=1;
 				while(sum%i==0){
 					sum/=i;
 					cnt++;
 				}
 				ans*=cnt;
 			}
 		if(sum!=1)
 			ans*=2;
 		printf("%d\n",ans);
 	}
 }
