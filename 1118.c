#include<stdio.h>
int main(){
	int n,k,a,b,c,dlt;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d %d",&a,&b,&c);
		if(a){
			dlt=b*b-4*a*c;
			if(dlt>0)	
				n=2;
			else if(dlt==0)
				n=1;
			else 
				n=0;
		}
		else if(b)
			n=1;
		else {
			if(c)
				n=0;
			else
				n=3;
		}
		n==3?printf("INF\n"):printf("%d\n",n);
	}
}
