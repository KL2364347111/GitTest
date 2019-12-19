#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,p;
    float temp;
    float PI=3.14159265;
    scanf("%f%f%f",&a,&b,&p);
    temp=p*(PI/180);
    c=sqrt(a*a+b*b-2*a*b*cos(temp));
    printf("%g\n",c);
}

