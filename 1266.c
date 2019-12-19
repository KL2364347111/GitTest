#include<stdio.h>
#include<string.h>
int main(){
	int R,G,B,len;
	int cnt,i,j;
	char s[10010];
	while(scanf("%s",s)==1){
		cnt=0;
		R=G=0;
		len=strlen(s);
		for(i=0;i<len;i++){
			if(s[i]=='R')
				R++;
			else if(s[i]=='G')
				G++;
		}
		B=len-R-G;
		for(i=0;i<R;i++){
			if(s[i]!='R'){
				if(s[i]=='G'){
					for(j=R;j<len;j++)
						if(s[j]=='R'){
							cnt++;
							s[j]='G';
							break;
						}
				}
				else {
					for(j=len-1;j>i;j--){
						if(s[j]=='R'){
							cnt++;
							s[j]=='B';
							break;
						}
					}
				}
			}
		}
		for(i=R;i<R+G;i++){
			if(s[i]!='G'){
				for(j=R+G;j<len;j++){
					if(s[j]=='G'){
						cnt++;
						s[j]='B';
						break;
					}
				}
			}
		}
		printf("%d\n",cnt);
	}
}
