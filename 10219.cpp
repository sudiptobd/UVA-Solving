#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
    long long int n,k;
    while(scanf("%lld %lld",&n,&k)==2)
    {
        double ans=0;

        if (n-k<k)
            for(int i=k+1;i<=n;i++)ans+=log10(i)-log10(n-i+1);
        else for(int i=n-k+1;i<=n;i++)ans+=log10(i)-log10(n-i+1);

        printf("%.0lf\n",floor(ans)+1);
    }
}
