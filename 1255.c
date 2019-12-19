#include<stdio.h>
#include<math.h>
int main(){
	int k,i,a,b;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&a,&b);
		for(i=abs(a-b)+1;i<=a+b;i++){
			if(i*i==abs(a*a-b*b) || i*i==a*a+b*b){
				printf("%d\n",i);
				break;
			}
		}
		if(i>a+b)
			printf("None\n");
	}
}
