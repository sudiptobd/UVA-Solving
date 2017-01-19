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

int n=8;
char ara[8][8];
bool rw[40]={false};
bool ld[40]={false};
bool rd[40]={false};
int maxi=0;
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
int t=Int;
bc(0);
while(t--)
{


    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            ara[i][j]=Int;

    for(int i=0;i<92;i++)
    {
        int sum=0;
         for(int j=0;j<n;j++)sum+=ara[j][data[i][j]];
         if(sum>maxi)maxi=sum;
    }

    printf("%5d\n",maxi);
   maxi=0;
}



return 0;

}
