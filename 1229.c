#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[12];
	int i,len,sum,flag;
	while(scanf("%s",s)==1){
		len=strlen(s);
		sum=0;
		flag=-1;
		for(i=0;i<len;i++){
			if(isdigit(s[i]))
				sum+=(s[i]-'0')*(10-i)%11;	
			else if(s[i]=='X')
				sum+=(10-i)*10%11;
			else if(s[i]=='?')
				flag=i;
		}
		for(i=0;i<=10;i++)
			if((sum+(10-flag)*i)%11==0){
				if(i==10)
					s[flag]='X';
				else
					s[flag]=i+'0';
				break;
			}	
		printf("%s\n",s);
	}
}
