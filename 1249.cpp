#include<stdio.h>
inline bool is_prime(int x){
	if(x%6!=1 && x%6!=5)
		return false;
	for(register int i=5;i*i<=x;i+=6)
		if(x%i==0 || x%(i+2)==0)
			return false;
	return true;
}
int a[100]={0,2,3,5,7};
int main(){
	int num=4,k=4,pos=1,temp;
	while(num<83){
		for(int i=pos;i<=k;i++){
			temp=10*a[i];
			for(int j=0;j<10;j++){
				if(is_prime(temp+j))
					a[++num]=temp+j;
			}
		}
		pos=k+1;
		k=num;
	}
	for(int i=1;i<=83;i++)
		printf("%d %d\n",i,a[i]);
}
