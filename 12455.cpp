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

int n,m;
int dp[21][1001];
int ara[21];


int sc()
{
    int n;
    scanf("%d",&n);
    return n;

}

int okk(int i,int am)
{
    if(am==n)return 1;
    if(i==m)return 0;
    if(dp[i][am]!=-1)return dp[i][am];
    if(okk(i+1,am)) return dp[i][am]=1;
    if(okk(i+1,am+ara[i])) return dp[i][am]=1;
    return dp[i][am]=0;

}

int main()
{
//freopen("in.txt","r",stdin);

    int t=sc();
    while(t--)
    {
        n=sc();
        m=sc();
        memset(dp,-1,sizeof dp);
        for(int i=0; i<m; i++)ara[i]=sc();
        if(okk(0,0))printf("YES\n");
        else printf("NO\n");




    }

    return 0;

}
