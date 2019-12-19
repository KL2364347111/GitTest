#include<stdio.h>
#include<math.h>
int main(){
	unsigned n,i,m;
	while(~scanf("%d",&n)&&n){
		if(n<2){
			printf("No\n");
			continue;
		}
		else if(n==2 || n==3){
			printf("Yes\n");
			continue;
		}
		else if(n%6!=1 && n%6!=5){
			printf("No\n");
			continue;
		}
		m=sqrt(n);
		for(i=5;i<=m&& n%i && n%(i+2);i+=6);	
		i>m?printf("Yes\n"):printf("No\n");
	}
}
