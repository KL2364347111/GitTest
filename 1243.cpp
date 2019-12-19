#include<iostream>
#include<string>
using namespace std;
string inv[16]={"13","17","19","28",
			 "31","37","39","46",
			 "64","71","73","79",
			 "82","91","93","97"};
int main(){
	string s;
	int k,i;
	bool flag;
	cin>>k;
	while(k--){
		cin>>s;
		flag=true;
		for(i=0;i<16;i++){
			if(s.find(inv[i])!=-1 && s.find(inv[i])<s.find((inv[i][0]+inv[i][1])/2)){
				flag=false;
				break;
			}			
		}
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
