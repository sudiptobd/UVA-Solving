#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592653589793

int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        double s=(a+b+c)/2;
        double ta=sqrt(s*(s-a)*(s-b)*(s-c));
        double outr=(a*b*c)/(4*ta);
        double inr=(ta/s);
        double outa=(pi*outr*outr)-ta;
        double ina=(pi*inr*inr);
        double vta=ta-ina;
        printf("%.4lf %.4lf %.4lf\n",outa,vta,ina);
    }
    return 0;
}
