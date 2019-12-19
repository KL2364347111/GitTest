#include<stdio.h>
int main(){
	int k,n,m;
	scanf("%d",&k);
	while(k--){
		scanf("%d",&m);
		if(m%2==0 || m%5==0)
			printf("0\n");	
		else {
			n=1;
			int temp=m;
			while(temp--){
				n=n%m;
				if(n==0)
					break;
				n=n*10+1;
			}
			if(n)
				printf("0\n");
			else
				printf("%d\n",m-temp);
		}
	}
}
