#include <stdio.h>
int main(){
	int n,a,b;
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	if((a!=n&&(b==n||a==b))||((a!=b)&&(a==n||b==n)))
		printf("Yes");
	else
		printf("No");
	return 0;
} 
