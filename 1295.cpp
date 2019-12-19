#include<stdio.h>
#include<string.h>
#include<math.h>
int c2d(char c){
	if(c>='0'&&c<='9')	
		return c-'0';
}
int is_prime(int n){
	if(n==1)	
		return 0;
	if(n==2||n==3)	
		return 1;
	if(n%6!=1&&n%6!=5)
		return 0;
	int temp=sqrt(n);
	for(int i=5;i<=temp;i+=6)
		if(n%i==0||n%(i+2)==0)
			return 0;
		return 1;
}
int main(){
	int k,l,i,j;
	char s[11];
	int a[11];
	scanf("%d",&k);
	while(k--){
		scanf("%s",s);
		int flag=1;
		memset(a,0,sizeof(a));
		for(i=0;i<strlen(s);i++){
			if(s[i]=='0'){
				flag=0;
				break;
				}
			else{
			for(j=i;j<strlen(s);j++){
				a[i]=a[i]*10+c2d(s[j]);
				}
			if(!is_prime(a[i])){
				flag=0;
				break;
				}
			
			}
		}
		if(flag)
			printf("Yes\n");
		else	
			printf("No\n");
	}
}
