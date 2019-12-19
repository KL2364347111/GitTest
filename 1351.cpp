#include<stdio.h>
#include<string.h>
int main(){
	char s[1010];
	int a[200];
	while(scanf("%s",s)==1){
		memset(a,0,sizeof(a));
		int len=strlen(s);
		int flag=1;
		int cnt1=0,cnt2=0;
		for(char i='a';i<='z';i++){
			for(int j=0;j<len;j++){
				if(s[j]==i)
					a[i]++;
			}
		}
		if(len%2==0){
			for(char i='a';i<='z';i++){
				if(a[i]%2){
					flag=0;
					break;	
				}		
			}
		}
		else {
			flag=0;
			for(char i='a';i<='z';i++){
				if(a[i]%2){
					cnt1++;	
				}
				else
					cnt2++;		
			}
		}
		if(flag)
			printf("Yes\n");
		else {
			if(cnt1==1)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
}
