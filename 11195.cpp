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
#include<bitset>
#include<iostream>
using namespace std;
#define inf 999999
#define MAX 100
#define gcd(a,b) __gcd(a,b)
int getInt(){int x;scanf("%d",&x);return x;}
long long getLongLong(){long long x;scanf("%I64d",&x);return x;}
double getDouble(){double x;scanf("%lf",&x);return x;}
char getChar(){char x;scanf("%c",&x);return x;}
#define Int getInt()
#define Char getChar()
#define Long getLongLong()
#define Double getDouble()
////////////////////////////////////
int n;
char ara[16][16];
bool rw[40]={false};
bool ld[40]={false};
bool rd[40]={false};
int ans=0;

void bc(int c)
{
    if(c==n){ans++;return;}
    for(int r=0;r<n;r++)
    if(ara[r][c]!='*'&&!rw[r]&&!ld[r-c+n-1]&&!rd[r+c])
    {
        rw[r]=ld[r-c+n-1]=rd[r+c]=true;
        bc(c+1);
        rw[r]=ld[r-c+n-1]=rd[r+c]=false;
    }
}


int main()
{
//freopen("in.txt","r",stdin);
//if(!rw[4])cout<<"hell";
int t=1;
while(n=Int)
{
    getchar();
    for(int i=0;i<n;i++)gets(ara[i]);
    bc(0);
    printf("Case %d: %d\n",t++,ans);
    ans=0;
    memset(rw,false,sizeof rw);
    memset(ld,false,sizeof ld);
    memset(ld,false,sizeof rd);
}



return 0;

}
