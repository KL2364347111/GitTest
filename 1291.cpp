#include<iostream>
#include<algorithm>
using namespace std;
int a[1000];
int main(){
	int m,n,k,mind,sum,pos,i;
	cin>>k;
	while(k--){
		cin>>n>>m;
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		mind=a[m-1]-a[0];
		pos=0;
		sum=0;
		for(i=0;i<n-m+1;i++)
			if(a[m+i-1]-a[i]<mind){
				mind=a[m+i-1]-a[i];
				pos=i;
			}
		for(i=pos;i<pos+m;i++)
			sum+=a[i];
		cout<<mind<<" "<<sum<<endl;
	}
}
