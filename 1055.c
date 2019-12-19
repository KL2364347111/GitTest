#include <stdio.h>
int main()
{
    char str[500];
    char *cp;
    int sum, sum2;
    while(scanf("%s", str)!=EOF){
        cp = str;
        sum = sum2 = 0;
        if(*cp=='0' && *(cp+1)=='\0')
            break;
        while(*cp != '\0'){
            sum += *cp-'0';
            if(sum>9)
                sum = sum%10 + sum/10;
                cp++;
            }
        printf("%d\n", sum);
    }
}
