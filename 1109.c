#include<stdio.h> 
#include<string.h>
int main(){
    char s[21][210];
    int i,n,k,j,len,len0,w;
    scanf("%d",&k);
    for(w=1;w<=k;w++){
        scanf("%d",&n);
        len0=210;
        j=1;
        for(i=0;i<n;i++){
            scanf("%s",s[i]);
            len=strlen(s[i]);
            if(len<len0)    
                len0=len;
        }
        printf("Case %d: ",w);
        for(len=0;len<len0;len++){
            for(i=0;i<n-1;i++)
                if(s[i][len]!=s[i+1][len]){
                    j=0;
                    break;
                }
            if(j)     printf("%c",s[0][len]);
            else break;
        }
        printf("\n");
    }
}
