#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r,n,area,pi=2*acos(0);
    while(scanf("%lf%lf",&r,&n)==2)
    {
        area=n*0.5*r*r*sin(2*pi/n);
        printf("%0.3lf\n",area);
    }
    return 0;
}
