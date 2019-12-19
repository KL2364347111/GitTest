#include<stdio.h>
#include<string.h>
int main(){
	char s[201],c,C;
	int i,l,cnt1,cnt2,j;
	while(gets(s)!=NULL){
		l=strlen(s);
		cnt1=0;
		cnt2=0;
		c='a';
		C='A';
		for(i=0;i<l;i++){
			if(s[i]==' ')
				cnt1++;
			}
		for(i=0;i<26;i++){
			if(cnt2>10)
				break;
			for(j=0;j<l;j++){
				if(s[j]==c+i||s[j]==C+i){
					cnt2++;
					break;
				}
			}
		}
		cnt1<10&&cnt2<=10 ? printf("Yes\n"):printf("No\n");
	}
}
