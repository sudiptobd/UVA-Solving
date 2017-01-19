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

#define max 100000001

bool prime(lli n)
{

   if(n==0)return true;
   if(n==1)return true;
   if(n==2)return false;
   if(n%2==0)return true;
    lli x=sqrt(n);
   for(lli i=3;i<=x;i+=2)
    if(n%i==0)return true;
   return false;
}

lli sc()
{
    lli n;
    scanf("%lld,",&n);
    return n;
}

lli sca()
{
    lli n;
    scanf("%lld",&n);
    return n;
}

int main()
{
//freopen("in.txt","r",stdin);
    lli n=sca();
    while(n--)
    {
        lli a=sc();
        if(!prime(a))
        {
            lli b=(pow(2,a)-1);
            //printf("%lld\n",b);
            if(!prime(b))
                printf("Yes\n");
                else printf("No\n");
        }
        else printf("No\n");
    }

return 0;

}
