#include<stdio.h> 
int main(){
	int k,n=1;
	char c,i,l,j,h;
	while(scanf("%c",&c)!=EOF){
		getchar();
		if(c=='#')	return 0;	
		else{
			printf("case %d:\n",n++);
			h=c;
			for(i='A';i<=h;i++){
				for(l='A';l<i;l++)	
					printf(" ");
				for(j='A';j<c;j++)
					printf("%c",j);
				printf("%c",j);
				c--;
				for(j=c;j>='A';j--)
					printf("%c",j);
				printf("\n");
			}
		}
	}
}
