#include<stdio.h>
#include<math.h>
int main(){
    unsigned long n,i,m;
    while(scanf("%lld",&n)!=EOF){
        if(n==0)  return 0;
        if(n==1){
            printf("No\n");
            continue;
        }
        m=sqrt(n);
        for(i=2;i<=m&&n%i;i++);
        if(i>m)
            printf("Yes\n");
        else 
            printf("No\n");
    }
    return 0;
}
