#include<stdio.h>
int GCD(int a, int b){
    return (b==0)?(a):GCD(b,a%b);
}
int main(){
	int x,y;
	while(scanf("%d %d",&x,&y)!=EOF){
		if(x==0&&y==0)	return 0;
		else
			printf("%d\n",x*y/GCD(x,y));
	}
}
