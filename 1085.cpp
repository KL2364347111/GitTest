#include <stdio.h>
#include <math.h>
int main (){
    float xa,ya,xb,yb,d;
    scanf("%f%f%f%f",&xa,&ya,&xb,&yb);
    d=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    printf("%g\n",d);
}

