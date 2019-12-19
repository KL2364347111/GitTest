#include<stdio.h>
#include<string.h>
char xu[7]={'I','V','X','L','C','D','M'};
int shu[7]={1,5,10,50,100,500,1000};
int find(char c){
	int l;
	for(l=0;l<7;l++){
		if(c==xu[l])
			break;
	}
	return shu[l];
}
int main(){
	char s[30];
	unsigned sum;
	int i,a,b;
	while(scanf("%s",s)!=EOF){
		sum=0;
		for(i=0;i<strlen(s)-1;i++){
			a=find(s[i]);
			b=find(s[i+1]);
			if(a==1&&(b==5||b==10))
				sum-=a;
			else if(a==10&&(b==50||b==100))
				sum-=a;
			else if(a==100&&(b==500||b==1000))
				sum-=a;
			else sum+=a;
		}
		sum+=find(s[i]);
		printf("%d\n",sum);
	}
}
