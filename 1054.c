#include<stdio.h>
 int main(){
     int n,i,j,k;
     long long int a[1000],b[1000];
     while(scanf("%d",&n)){
        if(n<=0) return 0;
        k=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=a[i]*a[i];
            } 
        for(j=0;j<n;j++)
        	for(i=0;i<n;i++){
        		if(a[i]==b[j])
		 			k++;
				}
        printf("%d\n",k);
     }
 }
