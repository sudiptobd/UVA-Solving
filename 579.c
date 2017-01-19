#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h,m,dif,a,b;
    while(scanf("%lf:%lf",&h,&m),h!=0)
    {
        h=h*5+m/12;
        if(h>m)dif=h-m;
        else dif=m-h;
        a=dif*6;
        b=(60-dif)*6;
        if(a<b)printf("%0.3lf\n",a);
        else printf("%0.3lf\n",b);
    }
    return 0;
}
