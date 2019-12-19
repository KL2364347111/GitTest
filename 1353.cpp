#include<stdio.h>
#include<string.h>
char trans[18]="0123456789ABCDEFG";
int main(){
	int n;
	char s[1010];
	while(scanf("%s %d",s,&n)==2){
		int len=strlen(s);
		int i,j,l;
		int flag=0;
		long long sum=0;
		for(i=2;i<=16;i++){
			sum=0;
			for(j=0;j<len;j++){
				if(s[j]>=trans[i])
					break;
				for(l=0;l<i;l++)
					if(s[j]==trans[l]){
						sum=sum*i+l;
						break;
					}			
			}
			if(sum==n){
				flag=1;
				break;
			}	
		}
		if(flag)
			printf("%d\n",i);
		else
			printf("Impossible\n");
	}
}
