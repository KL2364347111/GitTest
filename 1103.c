#include<stdio.h>
 int runnian(int x,int y,int z){
     int a[2][12]={
         {31,28,31,30,31,30,31,31,30,31,30,30},
         {31,29,31,30,31,30,31,31,30,31,30,30}
     };
     int sum,i;
     sum=z;
     z=((x%4==0&&x%100!=0)||x%400==0);
     for(i=0;i<y-1;i++){
         sum+=a[z][i];
     }
     return sum;
 }
 int main(){
     int year,month,day;
     int n;
     scanf("%d",&n);
     while(n--){
      scanf("%d-%d-%d",&year,&month,&day);
      day=runnian(year,month,day);
      printf("%d\n",day);
 } 
}
