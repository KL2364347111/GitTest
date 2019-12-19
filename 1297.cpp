#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
struct stud{
	int pro;
	unsigned long long id;
	int mark;
}x[510];
bool cmp(stud a, stud b){ 
	if(a.mark==b.mark)
		return a.id < b.id;
	return a.mark > b.mark;
}
int main(){
	int cnt=0;
	stud s; 
	int pro,num;
	double mark;
	unsigned long long id;
	while(scanf("%d %I64d %d",&pro,&id,&num)==3){
		mark=0;
		int flag=-1;
		for(int i=1;i<=cnt;i++)
			if(id==x[i].id)
				flag=i;
		if(num>=1&&num<=12)
			mark=32;
		else if(num>=13&&num<=24)
			mark=16;
		else if(num>=25&&num<=48)
			mark=8;
		else if(num>=49&&num<=96)
			mark=4;
		else if(num>=97&&num<=192)
			mark=2;
		else if(num>=193)
			mark=1;
		if(flag>0){
			x[flag].mark+=mark;	
		}
		else{
			++cnt;
			x[cnt].mark=mark;
			x[cnt].id=id;
		}
	}
	sort(x+1,x+1+cnt,cmp);
	double max=x[1].mark;
	for(int i=1;i<=cnt;i++)
		x[i].mark=100.5+10.0*log(x[i].mark/max);
	sort(x+1,x+cnt+1,cmp);
	for(int i=1;i<=cnt;i++)
		printf("%I64d %d\n",x[i].id,x[i].mark);
}
