#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n; double a,b,c; int count=0;
    while(scanf("%d",&n),n!=0)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        count++;
        if(n==1)
        {
            double s=(b*b-a*a)/(2*(b-a)/c);
            printf("Case %d: %0.3lf %0.3lf\n",count,s,(b-a)/c);
        }

        if(n==2)
        {
            double v=(b*b-a*a)/(2*c);
            printf("Case %d: %0.3lf %0.3lf\n",count,v,(b-a)/c);
        }

        if(n==3)
        {
            double v=sqrt(a*a+2*b*c);
            printf("Case %d: %0.3lf %0.3lf\n",count,v,(v-a)/b);
        }
        if(n==4)
        {
            double u=sqrt(a*a-2*b*c);
            printf("Case %d: %0.3lf %0.3lf\n",count,u,(a-u)/b);
        }

    }
    return 0;
}
