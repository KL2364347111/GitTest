#include<stdio.h>
 int main(){
     int K,k;
     unsigned int n;
     int sum;
     scanf("%d",&K);
     while(K--){
         scanf("%lld",&n);
         sum=0;
         k=0;
         while(n){
             if(n&1) {
                 k++;
                }
             else {
                 if(sum<k) sum=k;
                 k=0;
             }
             n=n>>1;
         }
         if(sum<k) sum=k;
         printf("%d\n",sum);
     }
     return 0;
}
