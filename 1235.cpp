#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	int k,i;
	scanf("%d",&k);
	while(k--){
		scanf("%s %s",a,b);
		int l1=strlen(a);
		int h=0;
		int l2=strlen(b);
		for(i=0;i<l1+l2;i++){
			if(i%2)
				printf("%c",b[l2-1-(i/2)]);
			else
				printf("%c",a[i/2]);
		}
		printf("\n");
	}
}
