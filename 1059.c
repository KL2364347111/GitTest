#include<stdio.h>
int main(){
    unsigned int x,count;
    while(scanf("%d",&x)==1){
        count=0;
        if(x<0) 
	    x=(~x);
        while(x){
            if(x&1) count++;
            x=x>>1;
        }
        printf("%d\n",count);
    }
}
