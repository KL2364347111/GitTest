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
inline unsigned long long GCD(unsigned long long x,unsigned long long y) {   
    unsigned long long t;
    while(y) {
        t=x%y;
        x=y;
        y=t;
    }
    return x;
}
int main()
{	
	unsigned long long t,p,q,k,a,b;
	scanf("%I64d",&k);
	while(k--){
		p=read();
		q=read();
		if(p==q)
			printf("1/%I64d\n",p);
		else{
			a=1;
			b=p;
			t;
			for(p++;p<=q;p++){
				a=a*p+b;
				b=b*p;
				t=GCD(a,b);
				a/=t;
				b/=t;
			}
			t=GCD(a,b);
			a/=t;
			b/=t;
			a%b?printf("%I64d/%I64d\n",a,b):printf("%I64d\n",a/b);
		}
	}
}
