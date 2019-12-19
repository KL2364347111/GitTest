#include<iostream>
using namespace std;
int main(){
	__int64 a,b,m,n;
	long long sum;
	int k;
	cin>>k;
	while(k--){
		cin>>a>>b;
		n=a-(a/2)-(a/3)+(a/6);
		m=b-(b/2)-(b/3)+(b/6);
		sum=m-n;
		if(a%2&&a%3&&a%6)	sum+=1;
		cout<<sum<<endl;
	}
}
