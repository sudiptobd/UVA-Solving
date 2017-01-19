#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <queue>
using namespace std;

int main()
{
    map<int,int>m;
    map<int,int>mcheck;
    queue<int>q;

    int n;
    while(scanf("%d",&n)==1)
    {
        m[n]++;
        q.push(n);


    }
    while(!q.empty())
    {
        if(mcheck[q.front()]!=1)
        {
            printf("%d %d\n",q.front(),m[q.front()]);
            mcheck[q.front()]=1;
        }
        q.pop();
    }

    return 0;
}
