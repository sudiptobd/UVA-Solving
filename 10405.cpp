#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

#define maxi 1009
int dp[maxi][maxi];
char a[maxi],b[maxi];
string ans;

int lcs(int i,int j)
{
    if(a[i]=='\0'||b[j]=='\0')return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int ans=0;
    if(a[i]==b[j])ans=1+lcs(i+1,j+1);
    else ans=max(lcs(i+1,j),lcs(i,j+1));
    return dp[i][j]=ans;
}
/*
void print_ans(int i,int j)
{
     if(a[i]=='\0'||b[j]=='\0'){cout<<ans<<endl; return;}
     if(a[i]==b[j])
     {
        ans+=a[i];
        print_ans(i+1,j+1);
        ans.erase(ans.end()-1);
     }
     else
     {
         if(dp[i+1][j]>dp[i][j+1])print_ans(i+1,j);
         else print_ans(i,j+1);
     }
}
*/

int main()
{

    /*strcpy(a,"HELLOM");
    strcpy(b,"HLLDEL");

    */
    //freopen("in.txt","r",stdin);
    while(gets(a))
    {
        memset(dp,-1,sizeof(dp));
        gets(b);
        printf("%d\n",lcs(0,0));
    }

//    print_ans(0,0);
    return 0;
}
