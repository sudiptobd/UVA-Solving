#include<stdio.h>
#include<iostream>
#include<utility>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<string>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<deque>
#include<vector>
#include<ctype.h>
using namespace std;
#define lli long long int
#define gcd(a,b) __gcd(a,b)


lli sc()
{
    lli n;
    scanf("%lld",&n);
    return n;
}

int main()
{
//freopen("in.txt","r",stdin);


    lli t=sc(),tc=1;

    while(t--)
    {
        lli a=sc(),b=sc();
        lli ara[a],bara[a],cara[a];
        for(int i=0;i<a;i++)ara[i]=sc();
        for(int i=0;i<a;i++)bara[i]=sc();
        for(int i=0;i<a;i++)cara[i]=bara[i]-ara[i];

        sort(cara,cara+a);


        lli sum=0;
        for(int i=0;i<a;i++)
        {
            if(cara[i]<0&&b!=0)
            {
                b--;
                continue;

            }
            sum+=cara[i];
        }
        if(sum>0)printf("Case %lld: %lld\n",tc++,sum);
        else printf("Case %lld: No Profit\n",tc++);


    }

    return 0;

}
