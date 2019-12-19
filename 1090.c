#include<stdio.h>
 int main(){
     int a[34][34];
     int n,i,j;
     for(i=0;i<34;i++)
          a[i][0]=1;
          a[1][1]=1;
     for(i=2;i<34;i++){
         for(j=1;j<=i-1;j++)
             a[i][j]=a[i-1][j-1]+a[i-1][j];
         a[i][i]=1;
     }
     while(scanf("%d",&n)!=EOF){
         if(n<0)    return 0;
         else{
             printf("2^%d=",n);
             for(i=0;i<n;i++)
                 printf("%d+",a[n][i]);
             printf("1\n");
         } 
     }
}
