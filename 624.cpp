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
vector<int>ans;
int top=0;


int sc()
{
    int n;
    scanf("%d",&n);
    return n;

}

int okk(int i,int am,vector<int> v)
{
    //if(am==n)return 1;
    //if(i==m)return 0;
    //if(dp[i][am]!=-1)return dp[i][am];
    v.push_back(ara[i]);
    am+=ara[i];

    if(am>top)
    {
        ans=v;
        top=am;
    }

    for(int j=i+1;j<m;j++)
         if((am+ara[j])<=n)okk(j,am,v);
         //if((j+1)<m&&(am+ara[j+1])<=m)okk(j+1,am+ara[j+1],v);




}

int main()
{
//freopen("in.txt","r",stdin);

    //int t=sc();
    while(scanf("%d %d",&n,&m)==2)
    {
        //n=sc();
        //m=sc();
       // memset(dp,-1,sizeof dp);
        for(int i=0; i<m; i++)ara[i]=sc();
        top=0;
        for(int j=0;j<m;j++)
        {
            vector<int >v;
             okk(j,0,v);
        }

        //okk(1,0,v);


        for(int i=0;i<ans.size();i++)printf("%d ",ans[i]);
        printf("sum:%d\n",top);









    }

    return 0;

}
