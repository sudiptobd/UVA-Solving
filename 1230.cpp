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

int bigmod(int x,int y,int n )
{
    int c;
    if(y==0)return 1;
    if(y&1)return ((x%n)*(bigmod(x,y-1,n)))%n;
    else
    {
        c=bigmod(x,y/2,n);
        return (c*c)%n;
    }
}

int main()
{
//freopen("in.txt","r",stdin);
    int t;
    while(t=sc())
    {
        if(!t)break;
        while(t--)
        {
            int x=sc();
            int y=sc();
            int n=sc();

            printf("%d\n",bigmod(x,y,n));
        }
    }


    return 0;

}






