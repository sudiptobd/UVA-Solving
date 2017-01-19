#include<stdio.h>
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
#include<iostream>
using namespace std;
#define inf 999999
#define MAX 100
#define gcd(a,b) __gcd(a,b)
int getInt()
{
    int x;
    scanf("%d",&x);
    return x;
}
long long getLongLong()
{
    long long x;
    scanf("%lld",&x);
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
#define Int getInt()
#define Char getChar()
#define Long getLongLong()
#define Double getDouble()
////////////////////////////////////

#define maxi 1009
int dp[maxi][maxi];
char a[maxi],b[maxi];
string ans;

int lcs(int i,int j)
{
    if(a[i]=='\0'||b[j]=='\0')return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=0;
    if(a[i]==b[j] )ans=1+lcs(i+1,j+1);
    else ans=max(lcs(i+1,j),lcs(i,j+1));
    return dp[i][j]=ans;
}

void print_ans(int i,int j)
{
    if(a[i]=='\0'||b[j]=='\0')
    {
        cout<<ans<<endl;
        return;
    }
    if(a[i]==b[j])
    {
        ans+=a[i];
        print_ans(i+1,j+1);
        ans.erase(ans.end()-1);
    }
    else
    {
        if(dp[i+1][j]>dp[i][j+1])print_ans(i+1,j);
        else if(dp[i+1][j]<dp[i][j+1])print_ans(i,j+1);
        else
        {
            print_ans(i+1,j);
            print_ans(i,j+1);
        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);
    int cases=1;
    while(gets(a))
    {
        if(!strcmp(a,"#"))break;
        gets(b);
        memset(dp,-1,sizeof dp);
        printf("Case #%d: you can visit at most %d cities.\n",cases++,lcs(0,0));
    }

return 0;

}
