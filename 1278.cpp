#include<bits/stdc++.h>
using namespace std;
int a[10010];
inline int read(){
	char ch=getchar();
	int x=0;
	while((ch<'0'||ch>'9')&&(ch!='-'))
		ch=getchar();
	while(ch>='0'&&ch<='9'){
		x=x*10+(ch-48);
		ch=getchar();
	}
	return x;
}
int main(){
	int k,i,n,d;
	k=read();
	while(k--){
		n=read();
		for(i=1;i<=n;i++)
			a[i]=read();
		if(n<3)	cout<<"No"<<endl;
		else{
			d=a[2]-a[1];
			for(i=1;a[i]+d==a[i+1];i++);
				if(i<n)	cout<<"No"<<endl;
				else cout<<"Yes"<<endl;
		}
	}
}
