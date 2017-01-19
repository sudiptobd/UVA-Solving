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


int n;
int k[14];
int take[14];
vector<int>v;

int sc()
{
    int x;
    scanf("%d",&x);
    return x;

}

void call()
{
    if(v.size()==6)
    {
        printf("%d",v[0]);
        for(int i=1;i<6;i++)
            printf(" %d",v[i]);
        printf("\n");

    }

    for(int i=0;i<n;i++)
    {
        if(!take[i])
        {
            if(v.size()!=0&&k[i]<v[v.size()-1])continue;
            v.push_back(k[i]); take[i]=1;
            call();
            v.pop_back();
            take[i]=0;
        }


    }
}

int main()
{
//freopen("in.txt","r",stdin);
    bool x=false;
    while(n=sc())
    {
        if(x)printf("\n");
        x=true;
        for(int i=0;i<n;i++)k[i]=sc();
        for(int i=0;i<n;i++)take[i]=0;
        call();

    }


return 0;

}
