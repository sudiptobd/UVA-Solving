#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#define lli  unsigned long long int

using namespace std;

lli sc()
{
    lli n;
    scanf("%llu",&n);
    return n;
}

lli sum(lli x)
{
    lli y=0;
    while(x)
    {
        lli temp=(x%10);
        temp*=temp;
        y+=temp;
        x=x/10;
    }
    return y;
}

bool ara[1000];

int main()
{
    lli t=sc();
    for(lli i=1;i<=t;i++)
    {
        memset(ara,true,sizeof ara);
        lli n=sc();
        lli x=sum(n);
        while(ara[x])
        {
            ara[x]=false;
            x=sum(x);
        }
        //cout<<x;
        if(x==1)printf("Case #%llu: %llu is a Happy number.\n",i,n);
        else printf("Case #%llu: %llu is an Unhappy number.\n",i,n);
    }
    return 0;
}
