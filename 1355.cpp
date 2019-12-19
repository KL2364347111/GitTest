#include<stdio.h>
#define N 3000009
int isp[N],pri[250000];
long long phi[N];
int main(){
	int i,j,cnt=0;
	phi[1]=1;
	for(i=2;i<=N;i++){
		if(!isp[i]){
			pri[++cnt]=i;
			phi[i]=i-1;
		}
		for(j=1;j<=cnt&&i*pri[j]<=N;j++){
			isp[i*pri[j]]=1;
			if(i%pri[j]==0){
				phi[i*pri[j]]=phi[i]*pri[j];
				break;
			}
			else phi[i*pri[j]]=phi[i]*(pri[j]-1);
		}	
	}
	for(i=1;i<=N;i++)
		phi[i]+=phi[i-1];
	int k,a,b;
	scanf("%d",&k);
	while(k--){
		scanf("%d%d",&a,&b);
		printf("%I64d\n",phi[b]-phi[a-1]);
	}
} 
