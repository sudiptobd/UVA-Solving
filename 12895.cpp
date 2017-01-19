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
#define in sc()

lli po(lli n,lli p)
{
    lli sum=1;
    for(int i=1;i<=p;i++)sum=sum*n;
    return sum;
}

int main()
{
//freopen("in.txt","r",stdin);

    lli t=in;
    while(t--)
    {
        lli n=in;
        lli cn=n;
        vector<lli>v;
        while(cn)
        {
            v.push_back(cn%10);
            cn=cn/10;
        }
        lli sum=0;
        lli p=1;
        while(sum<n)
        {
            sum=0;
            for(int i=0; i<v.size(); i++) sum=sum+po(v[i],p);
            p++;
        }
        if(sum==n)printf("Armstrong\n");
        else printf("Not Armstrong\n");

    }


    return 0;

}
