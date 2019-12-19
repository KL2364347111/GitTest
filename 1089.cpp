#include<stdio.h>
int main(){
	unsigned int n,i;
	int f,index;
	while(scanf("%d",&n)!=EOF){
		f=1;
		for(i=2;i*i<=n;i++){
			index=0;
			if(n%i==0){
				f? f=0:putchar('*');
				printf("%d",i);
				while(n%i==0){
					index++;
					n/=i;
				}
			if(index>1)
				printf("^%d",index);
			}
		}
		if(n>1)	
			f? printf("%d",n):printf("*%d",n);
		putchar('\n');
	}
}
