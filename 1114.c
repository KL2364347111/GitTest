#include<stdio.h>
#include<string.h> 
int main(){
    int k,len,n,K,L,i,j,l;
    char s[200];
    scanf("%d",&n);
    while(n--){
        gets(s);
        gets(s);
        len=strlen(s);
        scanf("%d %d",&K,&L);
        int h=K+L-1;
        if(h>=len) h=len;
        for(i=0;i<K-1;i++)
            printf("%c",s[i]);
        for(j=h-1;j>=K-1;j--)
            printf("%c",s[j]);
        for(l=h;l<len;l++)
            printf("%c",s[l]);
        printf("\n");
    } 
}
