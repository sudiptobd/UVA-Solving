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

int k[25][25];
int dp[225][25];
int m,c;

int sc()
{
    int n;
    scanf("%d",&n);
    return n;

}

int fun(int money,int st)
{
    //printf("%d %d\n",money , st);

    if(st==c&&money>=0)return 0;
    else if(money<0)return -2222222;
    else if(dp[money][st]!=-1)return dp[money][st];
    else
    {
        int temp=-2222222;
    for(int i=1;i<=k[st][0];i++)
        temp=max(k[st][i]+fun(money-k[st][i],st+1),temp);
    //printf("%d-\n",temp);
    return dp[money][st]=temp;
    }





}

int main()
{
//freopen("in.txt","r",stdin);
    int t=sc();
    while(t--)
    {
         m=sc();
         c=sc();
        for(int i=0; i<c; i++)
            {
                k[i][0]=sc();
                for(int j=1; j<=k[i][0]; j++)
                    k[i][j]=sc();
            }

        memset(dp,-1,sizeof dp);
        int res= fun(m,0);
        if(res>0)printf("%d\n",res);
        else printf("no solution\n");


    }

    return 0;

}
