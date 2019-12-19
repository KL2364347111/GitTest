#include<stdio.h>
#include<string.h>
int main(){
	long long a,b,c,t;
	int k,i;
	char s[200];
	scanf("%d",&k);
	while(k--){
		scanf("%s", s);
		a=s[0]-'0';
		for(i=1;i<=200;i++)
			if(s[i]== '+')
				break;
			else
				a=a*10+s[i]-'0';
		b = s[++i]-'0';
		for(i++;i<= 200; i++)
			if(s[i]=='=')
				break;
			else
				b=b*10+s[i]-'0';
		c=s[++i]-'0';
		for(i++;i<strlen(s);i++)
			c=c*10+s[i]-'0';
		t=a;
		if(a+b==c)	
			printf("0\n");	
		else{
			int flag=0;
			for(i=1;i<=8;i++){
				a*=10;
				if(a+b==c){
					flag=1;
					break;
				}
			}
			if(flag)
				printf("%d\n",i);
			else{
				a=t;
				for(i=1;i<=8;i++){
					b*=10;
					if(a+b==c){
						printf("%d\n",-i);
						break;
					}
				}		
			}
		}
	}
}
