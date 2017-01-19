#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,r,s;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {

        s=(a+b+c)/2;
        r=sqrt((s-a)*(s-b)*(s-c)/s);
        if(a==0 && b==0 && c==0)r=0;
        printf("The radius of the round table is: %0.3lf\n",r);
    }
    return 0;
}
