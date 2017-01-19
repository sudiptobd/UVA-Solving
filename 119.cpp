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

int main()
{
//freopen("in.txt","r",stdin);

    int x=0;
    int n;
    while(scanf("%d",&n)==1)
    {
        if(x)printf("\n");
        x++;
        vector<string>v;
        map<string,int>ma;

        char take[50];
        for(int i=0;i<n;i++)
        {
            scanf("%s",take);
            v.push_back(take);
            ma[take]=0;
           // cout<<"-"<<v[v.size()-1]<<" "<< ma[take]<<"-\n";
        }

        for(int i=0;i<n;i++)
        {
            int my,m;
            scanf("%s %d %d",take,&my,&m);
             //cout<<"-"<<take<<" "<< my<< " "<<m<<"-\n";
            int given=0;
            if(m)given=my-(my%m);
            ma[take]-=given;
            //cout<<ma[take]<<endl;
            for(int j=0;j<m;j++)
            {
                scanf("%s",take);
                ma[take]+=(given/m);
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" "<<ma[v[i]]<<"\n";
        }

    }


    return 0;

}
