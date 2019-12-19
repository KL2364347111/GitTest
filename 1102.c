#include<stdio.h>
 int main(){
      int x,y,n,i,k,a,b;
      scanf("%d",&n);
      for(i=0;i<n;i++){
          k=0;
          scanf("%d%d",&x,&y);
          while(x||y){
              a=x%2;
            b=y%2;
            if(a!=b) k++;
            x=x/2;
            y=y/2; 
          }
        printf("%d\n",k);
      }     
}
