#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,s,x1,x2;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        x1=s*(s-a)*(s-b)*(s-c);
        if(x1<=0){ printf("-1.000\n"); continue; }
        x2=sqrt(x1);
        printf("%0.3lf\n",x2*4/3);
    }
    return 0;
}
