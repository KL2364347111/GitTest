#include<stdio.h>
 int main(){
 	int n,K,i,j,k,l;
 	int a[100];
 	scanf("%d",&K);
 	while(K--){
 		scanf("%d",&n);
 		l=1;
 		for(i=0;i<n;i++)
 			scanf("%d",&a[i]);
 		for(i=0;i<n-2;i++){
 			for(j=i+1;j<n-1;j++)
 				for(k=j+1;k<n;k++)
 				 if(a[i]>a[j]&&a[i]>a[k]&&a[k]>a[j]){
 				 	l=0;
 				 	break;
				  }
		 }
		if(l==0) printf("No\n");
		else printf("Yes\n");
	 }
 }
