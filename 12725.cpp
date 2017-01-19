#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double n,m,a,b;
        scanf("%lf %lf %lf %lf",&n,&m,&a,&b);
        double sum=((a+b)*m-n*a)/b;
        if(sum>=0&&sum<=10)printf("Case #%d: %.2lf\n",i,sum);
        else printf("Case #%d: Impossible\n",i);
    }


    return 0;
}
