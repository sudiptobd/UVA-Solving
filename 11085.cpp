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
int pos[8];
int n=8;
char ara[16][16];
bool rw[40]={false};
bool ld[40]={false};
bool rd[40]={false};
int ans=0;
int mini=1000;
vector<int>v;
int data[92][8];

int x=0;
void bc(int c)
{
    if(c==n)
    {
          for(int i=0;i<n;i++)data[x][i]=v[i];
          x++;
          return ;
    }
    for(int r=0;r<n;r++)
    if(!rw[r]&&!ld[r-c+n-1]&&!rd[r+c])
    {
        rw[r]=ld[r-c+n-1]=rd[r+c]=true;
        v.push_back(r);
        bc(c+1);
        rw[r]=ld[r-c+n-1]=rd[r+c]=false;
        v.pop_back();
    }
}


int main()
{
//freopen("in.txt","r",stdin);
//if(!rw[4])cout<<"hell";
int t=1;
bc(0);
while(scanf("%d",&pos[0])==1)
{
    pos[0]--;
    //rw[pos[0]]=ld[pos[0]+n-1]=rd[pos[0]]=true;
    for(int i=1;i<n;i++)
    {
        pos[i]=Int;
        pos[i]--;
       // rw[pos[i]]=ld[pos[i]-i+n-1]=rd[pos[i]+i]=true;
    }
    for(int i=0;i<92;i++)
    {
        int sum=0;
         for(int j=0;j<n;j++)if(pos[j]!=data[i][j])sum++;
         if(sum<mini)mini=sum;
    }

    printf("Case %d: %d\n",t++,mini);
    mini=1000;
}



return 0;

}
