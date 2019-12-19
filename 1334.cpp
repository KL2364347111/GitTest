#include<stdio.h>
#include<ctype.h>
inline unsigned long long read(){
	unsigned long long x=0;
	char c=getchar();
	for(;!isdigit(c);c=getchar());
	for(;isdigit(c);c=getchar())
		x=x*10+c-'0';
	return x;
}
unsigned long long GCD(unsigned long long a,unsigned long long b){
	int t;
	while(b)
	t=a%b,
	a=b,
	b=t;
	return a;
}
unsigned long long LCM(unsigned long long int x,unsigned long long int y,unsigned long long int z){
	unsigned long long temp=x*y/GCD(x,y);
	return temp*z/GCD(temp,z);
}
unsigned long long a[110];
int main()
{
	unsigned long long k=read();
	while(k--){
		unsigned long long n=read();
		for(int i=0;i<n;i++)
			a[i]=read();
		unsigned long long min=a[0]*a[1]*a[2];
		for(int i=0;i<n-2;i++)
			for(int j=i+1;j<n-1;j++)
				for(int l=j+1;l<n;l++){
					unsigned long long tmp=LCM(a[i],a[j],a[l]);
					if(min>tmp)
						min = tmp;
				}
		printf("%I64d\n", min);
	}
}
