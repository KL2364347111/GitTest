#include<stdio.h>
 int main(){
     int n,i,j,k,m;
     int a[101];
     while(scanf("%d",&n)){
         if(n==0) return 0;
         for(i=0;i<n;i++){
             scanf("%d",&a[i]);
         }
         m=n;
        for(i=0;i<n-1;i++){
            for(j=0;j<m-1;j++)
             a[j]=(a[j]+a[j+1])%2013;
          m--;
        }
        printf("%d\n",a[0]%2013);
     }
     return 0;
 }
