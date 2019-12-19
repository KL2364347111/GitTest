#include<stdio.h>
#include<string.h>
int C2D(char c){
    if(c>=48&&c<=57)
        return c-48;
    if(c>=65&&c<=90)
        return c-65+10;
    if(c>=97&&c<=122)
        return c-97+36;
}
int main(){
    __int64 n,temp,sum,i;
    char s[100];
    int k,l;
    scanf("%d",&k);
    while(k--){
        scanf("%s %I64d",s,&n);
        temp=0;
        l=strlen(s);
        if(s[0]=='-'){
            for(i=1;i<l;i++)
                temp=temp*n+C2D(s[i]);
            sum=-temp;
        }
        else {
            for(i=0;i<l;i++)
                temp=temp*n+C2D(s[i]);
            sum=temp;
        }    
        scanf("%s %I64d",s,&n);
        temp=0;
        l=strlen(s);
        if(s[0]=='-'){
            for(i=1;i<l;i++)
                temp=temp*n+C2D(s[i]);
            temp=-temp;
        }
        else {
            for(i=0;i<l;i++)
                temp=temp*n+C2D(s[i]);
        }    
        printf("%I64d\n",sum+temp);        
    }   
}
