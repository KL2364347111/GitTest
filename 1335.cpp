#include<stdio.h>
int main(){
    int k,x,y,r,cnt;
    scanf("%d",&k);
    while(k--){
        scanf("%d",&r);
        cnt=1;
        for(x=r-1;x>0;x--){
            for(y=1;y<r;y++){
                if(x*x+y*y==r*r)
                    cnt++;
            }
        }
        printf("%d\n",4*cnt);
    }
}
