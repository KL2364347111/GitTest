#include<stdio.h>
int main(){
    int K,n,i,j,k,a[1000];
    char c;
    scanf("%d",&K);
    while(K--){
        scanf("%d%c",&n,&c);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    if(c=='A'){
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)    
               if(a[i]>a[j]){
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
               }
        }
    else if(c=='D'){
        for(i=0;i<n-1;i++)
        	for(j=i+1;j<n;j++)    
               if(a[i]<a[j]){
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
               }
        }
        for(i=0;i<n-1;i++)
            scanf("%d ",a[i]);
            scanf("%d\n",a[i]);
        }   
}
