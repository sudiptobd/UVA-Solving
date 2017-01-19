#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    double d,l,a,b;
    double pi=2*acos(0);
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf",&d,&l);
        a=l/2;
        b=sqrt((l/2)*(l/2)-(d/2)*(d/2));
        printf("%0.3lf\n",pi*a*b);
    }

    return 0;
}
