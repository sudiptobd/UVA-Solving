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

int sc()
{
    int n;
    scanf("%d",&n);
    return n;

}
int dp[1025][1025];

int main()
{
//freopen("in.txt","r",stdin);
    int t=sc();
    while(t--)
    {
        memset(dp,0,sizeof dp);
        int mi=0,mj=0,mx=0;

        int d=sc();
        int n=sc();
        while(n--)
        {
            int x=sc(),y=sc(),cost=sc();

            for(int i=max(0,x-d); i<=min(x+d,1024); i++)
                for(int j=max(0,y-d); j<=min(y+d,1024); j++)
                {
                    dp[i][j]+=cost;
                    if(mx<dp[i][j])mx=dp[i][j],mi=i,mj=j;

                }
        }


        printf("%d %d %d\n",mi,mj,mx);


    }

    return 0;

}
