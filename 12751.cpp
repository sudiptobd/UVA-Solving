#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#define lli long long int
using namespace std;


lli sc()
{
    lli x;
    scanf("%lld",&x);
    return x;

}

/*int fundp(int i,int w)
{
    if(i==n+1)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int profit1=0,profit2=0;
    if(w+wet[i]<=mxwet)
        profit1=cost[i]+fun(i+1,w+wet[i]);
    profit2=fun(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];


}*/

/*void mem()
{
    for(int i=0;i<1010;i++)
        for(int j=0;j<32;j++)
            dp[i][j]=-1;
}
*/


int main()
{
    lli t=sc(),tcase=1;
    while(t--)
    {
         lli n=sc();
         lli k=sc();
         lli x=sc();
         lli sum=0;
         for(lli i=1;i<=n;i++)sum+=i;
         for(lli i=0;i<k;i++)sum-=i+x;
            printf("Case %lld: %lld\n",tcase++,sum);
    }

    return 0;
}
