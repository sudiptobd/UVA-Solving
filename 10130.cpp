#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#define lli long long int
using namespace std;
int n;
int cost[1010];
int wet[1010];
int dp[1010][32];
int mxwet;

int sc()
{
    int x;
    scanf("%d",&x);
    return x;

}

int fun(int i,int w)
{
    if(i==n+1)return 0;
    if(dp[i][w]!=-1)return dp[i][w];
    int profit1=0,profit2=0;
    if(w+wet[i]<=mxwet)
        profit1=cost[i]+fun(i+1,w+wet[i]);
    profit2=fun(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];


}

void mem()
{
    for(int i=0;i<1010;i++)
        for(int j=0;j<32;j++)
            dp[i][j]=-1;
}

int main()
{
    int t=sc();
    while(t--)
    {
         n=sc();
         for(int i=1;i<=n;i++)
            cost[i]=sc(),wet[i]=sc();
         int g=sc();
        int sum=0;
        for(int i=1;i<=g;i++)
        {
            mem();
            mxwet=sc();
            sum+=fun(1,0);
        }
        printf("%d\n",sum);
    }

    return 0;
}
