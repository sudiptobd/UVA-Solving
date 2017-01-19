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
int t,n;
int ara[20];
int chk[20]= {0};

vector< vector<int> > ans;




int sc()
{
    int x;
    scanf("%d",&x);
    return x;
}


void call(int x,int am,vector<int>v)
{
    am+=ara[x];
    v.push_back(ara[x]);
    if(am==t)
    {
        bool ok=true;
        for(int k=0; k<ans.size(); k++)
            if(v==ans[k])
            {
                ok=false;
                break;
            }
        if(ok)
        {
            printf("%d",v[0]);
            for(int i=1; i<v.size(); i++)printf("+%d",v[i]);
            printf("\n");
            ans.push_back(v);
        }
    }

    for(int i=x+1; i<n; i++)
    {
        if((am+ara[i])<=t)call(i,am,v);
    }

}

int main()
{
//freopen("in.txt","r",stdin);

    while(scanf("%d %d",&t,&n)&&t&&n)
    {
        printf("Sums of %d:\n",t);
        for(int i=0; i<n; i++)ara[i]=sc();
        for(int i=0; i<n; i++)
        {
            vector<int>v;
            call(i,0,v);
        }

        if(!ans.size())printf("NONE\n");
        while(ans.size())ans.pop_back();


    }

    return 0;

}
