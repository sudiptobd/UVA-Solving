#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    double n,k;
    while(scanf("%lf %lf",&n,&k)==2)
    {
        if(n==0&&k==0)break;
        double ans=1;

        if (n-k<k)
            for(double i=k+1;i<=n;i++)ans*=i/(n-i+1);
        else for(double i=n-k+1;i<=n;i++)ans*=i/(n-i+1);

        printf("%.0lf\n",ans);
    }
}
