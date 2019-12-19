#include<stdio.h>
int main(){
	int i,n,j,k,l,m;
	char c;
	
	while(scanf("%c",&c)!=EOF){
		n=c-64;
		for(i=1;i<=n;i++){
			for(j=1;j<=2*n-i;j++)
				printf(" ");
			for(k=1;k<=i;k++)
				printf("%c",k+64);
			for(l=i-1;l>=1;l--)
				printf("%c",l+64);
			printf("\n");
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=n-i;j++)
				printf(" ");
			for(k=1;k<=i;k++)
				printf("%c",k+64);
			for(l=i-1;l>=1;l--)
				printf("%c",l+64);
			for(j=1;j<=2*(n-i)+1;j++)
				printf(" ");
			for(k=1;k<=i;k++)
				printf("%c",k+64);
			for(l=i-1;l>=1;l--)
				printf("%c",l+64);
			printf("\n");
		}
	}
}
