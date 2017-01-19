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

int main()
{
//freopen("in.txt","r",stdin);

    int t=sc();
    while(t--)
    {
        int n=sc();
        int ara[n];
        ara[0]=sc();
        int mx=ara[0],md=-99999999;
        for(int i=1;i<n;i++)
        {
            ara[i]=sc();
            if(ara[i]>mx&&i<n-1)mx=ara[i];
            if(mx!=ara[i])md=max(md,mx-ara[i]);
        }
        printf("%d\n",md);

    }

    return 0;

}



















