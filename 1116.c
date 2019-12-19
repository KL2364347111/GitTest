#include<stdio.h>
#include<math.h>
 int main(){
     int n,m,sum,i,j,k;
     while(scanf("%d",&n)){
         if(n==0) 
         return 0;
         i=0; 
         sum=0;
         m=n; 
         while(n){  
          n=n/10;
          i++;
         }
         n=m;
        while(n){
            k=n%10;
            n=n/10;
            sum=sum+pow(k,i);
        } 
      if(sum==m) printf("Yes\n");
      else printf("No\n");
     }
 }
