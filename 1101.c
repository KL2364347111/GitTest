#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int k,i;
	char s[200];
	scanf("%d",&k);
	gets(s);
	while(k--){
		gets(s);
		for(i=0;i<strlen(s);i++){
			if(isupper(s[i]))
				s[i]=tolower(s[i]);
			else if(islower(s[i]))
				s[i]=toupper(s[i]);
		}
		printf("%s\n",s);
	}	
}
