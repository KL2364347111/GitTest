#include<stdio.h>
int main(){
	int p,cnt,n;
	while(scanf("%d",&n)!=EOF){
		if(n==0)	return 0;
		p=1;
		cnt=0;
		do{
			if(p<=n)	
				p*=2;
			else 
				p=(p*2-1)%(2*n);
			cnt++;
		}while(p!=1);
		printf("%d\n",cnt);
	}
}
