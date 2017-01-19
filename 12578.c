#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main()
{
    int t,i;
    scanf("%d",&t);
    double l,w,r,ar,ag;
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&l);
        w=l*6/10;
        r=l*2/10;
        ar=acos(-1)*r*r;
        ag=l*w-ar;
        printf("%.2lf %.2lf\n",ar,ag);
    }

    return 0;
}
