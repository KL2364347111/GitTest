#include<stdio.h>
 int main(){
     int a,b,n,i,j,k,sum,h,l,m;
     scanf("%d",&k);
     for(i=0;i<k;i++){
         scanf("%d%d%d",&a,&b,&n);
         l=0;
         for(j=a;j<=b;j++){
             sum=0;
             h=j;
             while(h){
                 m=h%10;
                 h=h/10;
                 sum+=m*m;
             }
          sum=sum%10;
          if(sum==n) l++;     
         }
         printf("%d\n",l);
     }
 }
