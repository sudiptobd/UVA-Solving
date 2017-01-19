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

lli lcm(lli a,lli b)
{
    return (a*b)/gcd(a,b);
}



int main()
{
//freopen("in.txt","r",stdin);

    //printf("%d",lcm(7,8));
    lli t=sc();
    while(t--)
    {
            lli a=sc(),c=sc();

            if(c%a)printf("NO SOLUTION\n");
            else
            {
                for(lli i=(c/a);i<=c;i+=(c/a))
                    if(lcm(a,i)==c)
                {
                    printf("%lld\n",i);
                    break;
                }
            }
    }

return 0;

}
