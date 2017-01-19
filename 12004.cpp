#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        long long int n;
        scanf("%lld",&n);
        n=(n-1)*n;
        if(n%4==0)printf("Case %d: %lld\n",i,n/4);
        else printf("Case %d: %lld/2\n",i,n/2);


    }
    return 0;
}
