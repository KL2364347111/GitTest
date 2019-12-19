#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
string R_num[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int A_num[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
string match(int x){
	string R="";
	for(int i=0;i<13&&x>0;i++){
		if(x<A_num[i])
			continue;
		while(x>=A_num[i]){
			x-=A_num[i];
			R+=R_num[i];
		}
	}
	return R;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		string R=match(n);
		cout<<R<<endl;
	}
}
