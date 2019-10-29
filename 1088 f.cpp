#include<stdio.h>
int factorial(int x){
	int result;
	if(x==0||x==1)	
		return 1;
	else if(x<0){
		return 0;
	}
	else{
		result=factorial(x-1)*x%10007;
	}
	return result;	
}
int main(){
	int n;
	__int64 y;
	while(scanf("%d",&n)!=EOF){
		if(n==-1)	return 0;
		else y=factorial(n);
		printf("%d\n",y);
	}
}
