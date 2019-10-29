#include<stdio.h>
#include<math.h> 
 int main(){
    float x,y;
	scanf("%f",&x);
    if(x>=0&&x<10){    
		y=cos(x+3.0);
		}
    if(x>=10&&x<20){ 
		y=cos(x+7.5);
	 	y*=y;
		}
    if(x>=20&&x<30){ 
		y=cos(x+4.0);
		y=pow(y,4);
		}
    if(x<0||x>=30) 
		printf("Not define");
    else printf("%.5f",y);
 }
