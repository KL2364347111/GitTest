#include<stdio.h>
#include<string.h>
char s[1001];
int main(){
	int i,l;
	__int64 sum;
	while(scanf("%s",s)!=EOF){
		l=strlen(s);
		sum=1;
		for(i=0;i<l;i++){
			sum=sum*26+s[i]-97;
			sum=sum%1000000007;
		}
		printf("%I64d\n",sum);	
	}
}
