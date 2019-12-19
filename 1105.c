#include<stdio.h>
int GCD(int x,int y){
    int t;
    while(y)
        t=x%y,
        x=y,
        y=t;
    if(x<0)
        return -x;
    else 
        return x; 
}
int main(){
    int a,b,c,d,add,sub;
    int k;
    scanf("%d",&k);
    while(k--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        add=a*d+b*c;
        sub=a*d-b*c;
        if(add%(b*d)==0)
            printf("%d ",add/(b*d));
        else
            printf("%d/%d ",add/GCD(add,(b*d)),b*d/GCD(add,(b*d)));
        if(sub%(b*d)==0)
            printf("%d\n",sub/(b*d));
        else
            printf("%d/%d\n",sub/GCD(sub,(b*d)),b*d/GCD(sub,(b*d)));
    }
}
