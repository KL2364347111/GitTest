#include<stdio.h>
#include<string.h>
 int main(){
     int K,i,j,k,l,n;
     int b[333];
     char s[1000];
     scanf("%d",&K); gets(s);
     for(i=0;i<K;i++){
         int a[3]={0,0,0};
         gets(s);
         l=strlen(s);
         for(j=0;j<l;j++)
         { if(s[j]=='X') a[0]++;
           else if(s[j]=='T') a[1]++;
           else if(s[j]=='U') a[2]++;
         }
        for(j=0;j<2;j++){
         for(k=j+1;k<3;k++)
           if(a[j]>a[k])
             n=a[j],a[j]=a[k],a[k]=n;}
        b[i]=a[0];
        printf("%d\n",b[i]);
     }
     
 }

