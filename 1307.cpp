#include<iostream>
using namespace std;
long long a,b;
int sum1,sum2;
void dfs(long long now,long long cnt,int *sum,long long *n){
	if(cnt>1||now>*n)
		return;
	if(cnt== 1){
		*sum+=1;
		dfs(now<<1|1,cnt,sum,n);
	}
	else{
		dfs(now<<1,cnt+1,sum,n);
		dfs(now<<1|1,cnt,sum,n);
	}
}
int main(){
	int k;
	cin>>k;
	while(k--){
		cin>>a>>b;
		sum1=sum2=0;
		a--;
		dfs(1,0,&sum1,&a);
		dfs(1,0,&sum2,&b);
		cout<<sum2-sum1<<endl;
	}
}
