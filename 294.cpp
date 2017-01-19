#include<iostream>
#include<cstdio>
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



int sc()
{
    int n;
    scanf("%d",&n);
    return n;
}


int main()
{
    //generate();
//freopen("in.txt","r",stdin);

    int t=sc();

    while(t--)
    {
        lli a=sc(),b=sc();
        lli mx=0,mxd=0;
        for(lli i=a; i<=b; i++)
        {
            lli len=sqrt(i);
            lli d=0;
            for(lli j=1; j<=len; j++)
                if(i%j==0)
                {
                    d++;
                    if(i/j!=j)d++;
                }
            if(d>mxd)mxd=d,mx=i;

        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",a,b,mx,mxd);

    }


    return 0;

}
