#include<stdio.h>
#include<string.h>
int main(){
	int k;
	char s[30];
	scanf("%d",&k);
	while(k--){
		scanf("%s",s);
		for(int i=0;i<6;i++)
			printf("%c",s[i]);
			putchar('-');
		for(int i=6;i<14;i++)
			printf("%c",s[i]);
			putchar('-');
		for(int i=14;i<17;i++)
			printf("%c",s[i]);
			putchar('-');
		printf("%c\n",s[17]);
	}
}
