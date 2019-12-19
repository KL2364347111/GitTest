#include<stdio.h>
int main(){
	int a[3];
	int max,min;
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	max=min=a[0];
	for(int i=0;i<3;i++){
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("%d %d",max,min);
}
