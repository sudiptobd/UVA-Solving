#include<bits/stdc++.h>
using namespace std;
#define inf 999999
#define MAX 10000
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/gcd(a,b)
#define lli long long int
int getInt()
{
    int x;
    scanf("%d",&x);
    return x;
}
long long getLongLong()
{
    long long x;
    scanf("%I64d",&x);
    return x;
}
double getDouble()
{
    double x;
    scanf("%lf",&x);
    return x;
}
char getChar()
{
    char x;
    scanf("%c",&x);
    return x;
}
template<typename t>
t abs(t a)
{
    if(a>=0)
        return a;
    return -a;
}
#define Int getInt()
#define Char getChar()
#define Long getLongLong()
#define Double getDouble()
#define loopi for(int i=0;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define P printf
#define PD(x) printf("%d\n",x);
////////////////////////////////////
/*
int ara[100000];
int n;
int dp[100000];
int dir[100000];

int LEN(int u)
{
    if(dp[u]!=-1)return dp[u];
    int maxi=0;
    for(int v=u+1;v<n;v++)
        if(ara[v]>ara[u])
        {
            int temp=LEN(v);
            if(temp>=maxi)
            {
                maxi=temp;
                dir[u]=v;
            }
        }
    return dp[u]=maxi+1;
}


void ANS(int src)
{
    while(dir[src]!=-1)
    {
        P("%d\n",ara[src]);
        src=dir[src];
    }
    P("%d\n",ara[src]);
}
int main()
{
    n=0;
    memset(dp,-1,sizeof dp);
    memset(dir,-1,sizeof dir);

    while(scanf("%d",&ara[n++])==1);
    int maxi=0,src;
    for(int i=0;i<n;i++)
        if(LEN(i)>=maxi)
        {
            maxi=LEN(i);
            src=i;
        }
        if(maxi==0)P("0\n");
        else
        {
            P("%d\n-\n",maxi);
            ANS(src);
        }

    return 0;
}



*/

/*

void ans(int lend)
{
    if(lend<0)return;
    ans(parent[lend]);
    P("%d\n",ara[lend]);
}
*/

int main()
{
    int t=Int;
    while(t--)
    {
        int n=Int;
        int ara[2001],lis[2001],lds[2001];
        int ans=0;
        rep(i,n)ara[i]=Int;
        for(int i=n-1;i>=0;i--)
        {
            lis[i]=1;
            lds[i]=1;
            for(int j=i+1;j<n;j++)
            {
                if(ara[i]<ara[j])lis[i]=max(lis[j]+1,lis[i]);
                else if(ara[i]>ara[j])lds[i]=max(lds[j]+1,lds[i]);
            }
        }
        rep(i,n)ans=max(lis[i]+lds[i]-1,ans);


        P("%d\n",ans);
    }

    return 0;
}
















