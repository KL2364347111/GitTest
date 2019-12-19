#include <stdio.h>
#include <math.h>
int main (){
    float a,b,c;
    a=cos(M_PI/4);
    b=sin(M_PI/4);
    c=b*b+a*b-a*a;
    printf("%g\n",c);
}

