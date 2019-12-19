#include<stdio.h>
int main(){
	char op[15];
	int k,n,x,y,step,bearing;
	int a[4]={-1,-1,1,1};
	scanf("%d",&k);
	while(k--){
		x=0;
		y=0;
		bearing=2;
		scanf("%d",&n);
		while(n--){
			scanf("%s",op);
			if(op[0]=='L'){
				bearing=(bearing+3)%4;
			}
			else if(op[0]=='R'){
				bearing=(bearing+1)%4;
			}
			else if(op[0]=='B'){
				bearing=(bearing+2)%4;
			}
			else {
				scanf("%d",&step);
				if(bearing==1||bearing==3)
					x+=step*a[bearing];
				else
					y+=step*a[bearing];
			}
		}
		printf("%d %d\n",x,y);
	}
}
