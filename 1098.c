#include<stdio.h>
#include<string.h>
const int N=1000000;
int is_prime[1000000];
int vis[80000];
int main(){
    int a,b,i,j,k,h,sum,temp;
    memset(is_prime,1,sizeof(is_prime));
    is_prime[0]=0;
    is_prime[1] = 0;
    for(i=2;i<=N;i++){
        if(is_prime[i]==0){
            continue;
        }
        else {
            for(j=i*2;j<=N;j+=i)
                is_prime[j]=0;
        }
    }
    j=0;
    for(i=2;i<999984;i++)
        if(is_prime[i]){
            vis[j++]=i;
        }
    scanf("%d",&k);
    while(k--){
        scanf("%d %d",&a,&b);
        sum=0;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for(h=0;h<j;h++)
            if(vis[h]>=a&&vis[h]<=b)
                sum++;
        printf("%d\n",sum);
    }
}
