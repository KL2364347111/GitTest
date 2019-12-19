#include<stdio.h>
int C_number(int x){
    int a=0;
    while(x){
        a=a+x%10;
        x=x/10;
    } 
    return a;
}
  int main(){
      int K,t;
      long long n,i;
      scanf("%d",&K);
      while(K--){
          scanf("%d",&n);
          t=0;
          for(i=n-1;i>n-81&&i>0;i--){
              if(i+C_number(i)==n)
              t=1;
          }
        if(t) printf("No\n");
        else  printf("Yes\n");
          }
          
 }
  
