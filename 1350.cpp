#include<stdio.h>
#include<math.h>
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
		float x;
		scanf("%f",&x);
		printf("%.3f\n",sqrt(1-x*x));
	}
}

