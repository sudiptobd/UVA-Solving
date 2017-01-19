#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   long long int t,i,a,b,c;
    while(scanf("%lld",&t)==1)
    {
        for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
             if(a+b<=c||b+c<=a||c+a<=b)printf("Case %lld: Invalid\n",i);
        else if(a<=0||b<=0||c<=0)printf("Case %lld: Invalid\n",i);
        else if(a==b&&b==c)printf("Case %lld: Equilateral\n",i);
        else if(a==b||b==c||c==a)printf("Case %lld: Isosceles\n",i);
        else if(a!=b!=c)printf("Case %lld: Scalene\n",i);
    }
    }

    return 0;
}
