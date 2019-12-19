#include<stdio.h>
int main(){
    int n,i,result;
    while(~scanf("%d",&n) && n!=-1){
        result=1;
        for(i=2;i<=n;i++)
            result=result*i%10007;
        printf("%d\n",result);
    }
}
