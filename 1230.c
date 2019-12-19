#include<stdio.h>
int main(){
	int sum,win,num;
	char s[50];
	while(scanf("%d%d%s",&sum,&win,s)==3){
		if(s[0]=='A'){
			num=sum-win;
			if(num%2 || win>sum || sum==0 || win==0)
				printf("Impossible\n");
			else
				printf("%d:%d\n",num/2+win,num/2);
		}
		else if(s[0]=='B'){
			num=sum-win;
			if(num%2 || win>sum || sum==0 || win==0)
				printf("Impossible\n");
			else
				printf("%d:%d\n",num/2,num/2+win);
		}
		else {
			if(win || sum%2)
				printf("Impossible\n");
			else
				printf("%d:%d\n",sum/2,sum/2);
		}
	}
}
