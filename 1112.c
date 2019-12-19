#include <stdio.h>
int main()
{
    float x1,y1,x2,y2,x,y;
    int n,i,k;
    scanf("%d",&n); 
    for(i=0;i<n;i++){
     	scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x,&y);    
     	if((y1-y2)*(x-x2) == (x1-x2)*(y-y2))  
        	printf("Yes\n");
    	else 
        	printf("No\n");
		}  
}
