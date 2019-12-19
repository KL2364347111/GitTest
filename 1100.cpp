#include<stdio.h>
int main(){
	int k;
	float B,H;
	scanf("%d",&k);
	while(k--){
		scanf("%f%f",&B,&H);
		printf("%.1f\n",B*H/2);
	}
}
