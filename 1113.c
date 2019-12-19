#include<stdio.h>
int main(){
	int a,b,c,d;
	int n,k;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if(a<c){
			if(b>=c)
				printf("Yes\n");
			else
				printf("No\n");
		}
		else {
			if(d>=a)
				printf("Yes\n");
			else 
				printf("No\n");
		}
	}
}
