#include<stdio.h>
#include<ctype.h>
inline long long read(){
	long long x=0;
	char c=getchar();
	for(;!isdigit(c);c=getchar());
	for(;isdigit(c);c=getchar())
		x=x*10+c-'0';
	return x;
}
int main(){
	long long n;
	int k,m,temp;
	scanf("%d",&k);
	while(k--){
		n=read();
		if(n%11){
			printf("0\n");
			continue;
		}
		m=n/1111;
		int min=100000;
		for(int i=0;i<=m;i++){
			temp=i+(n-1111*i)/1001+(n-1111*i)%1001/11;
			if(min>temp)
				min=temp;
		}
		printf("%d\n",min);
	}
	
}
