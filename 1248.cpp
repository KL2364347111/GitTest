#include<stdio.h>
#include<algorithm>
using namespace std;
inline int count(int a[]){
    if(a[1]==a[2]&&a[2]==a[3])
        return 3;
    if(a[1]==a[2]||a[2]==a[3])
        return 2;
    return 1;
}
int main(){
    int k,same1,same2,i,cnt1,cnt2;
    int a[5],b[5];
    scanf("%d",&k);
    while(k--){
        for(i=1;i<=3;i++){
            scanf("%d",&a[i]);
            if(a[i]==1)
                a[i]=7;
        }
        for(i=1;i<=3;i++){
            scanf("%d",&b[i]);
            if(b[i]==1)
                b[i]=7;
        }
        sort(a+1,a+4);
        sort(b+1,b+4);
        same1=count(a);
        same2=count(b);
        if(same1>same2)
            printf("Alice\n");
        else if(same1<same2){
            printf("Bob\n");
        }
        else {
            if(same1==3){
                if(a[1]>b[1])
                    printf("Alice\n");
                else if(a[1]<b[1])
                    printf("Bob\n");
                else
                    printf("Draw\n");
            }
            else if(same1==1){
                if(a[3]==7)
                    a[3]=1;
                if(b[3]==7)
                    b[3]=1; 
                cnt1=a[1]+a[2]+a[3];
                cnt2=b[1]+b[2]+b[3];
                if(cnt1>cnt2)
                    printf("Alice\n");
                else if(cnt1<cnt2)
                    printf("Bob\n");
                else
                    printf("Draw\n");
            }
            else{
                if(a[2]>b[2])
                    printf("Alice\n");
                else if(a[2]<b[2])
                    printf("Bob\n");
                else {
                    if(a[1]==b[1]){
                        if(a[3]>b[3])
                            printf("Alice\n");
                        else if(a[3]<b[3])
                            printf("Bob\n");
                        else
                            printf("Draw\n");
                    }
                    else {
                        if(a[1]>b[1])
                            printf("Alice\n");
                        else if(a[1]<b[1])
                            printf("Bob\n");
                        else
                            printf("Draw\n");    
                    }
                }
            }
        }
    }
}
