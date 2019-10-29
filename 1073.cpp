#include<iostream>
using namespace std;
 int main(){
    int a[3],i,j,k;
    for(i=0;i<3;i++){cin>>a[i];     }
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(a[i]>a[j]){
                k=a[i];
				a[i]=a[j];
				a[j]=k;
            } 
			else {
				k=a[j];
				a[j]=a[i];
				a[i]=k;
			}
        }
    } 
    cout<<a[0]<<" "<<a[2];
 }
