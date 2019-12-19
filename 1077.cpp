#include<stdio.h>
int main(){
  	int n,k=1,i;
  	while(scanf("%d",&n)!=EOF){
  		if(n==0)	return 0;
  		printf("case %d:\n",k++);
  		for(i=1;i<=n;i++){
  			for(int j=n-i;j>0;j--)
  				printf(" ");
  			for(int l=0;l<2*i-1;l++)
  				printf("%d",i);
  				printf("\n");		
		}
	}	
}
