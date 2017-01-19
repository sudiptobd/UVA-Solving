#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n=0;
    while(scanf("%d",&n)&&n)
    {
        int e;
        scanf("%d",&e);
        vector<int>v[n];
        int a,b;
        for(int i=0; i<e; i++)
        {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        queue<int>q;
        for(int i=1; i<n; i++)q.push(i);
        int ac[500]= {0};
        int bc[500]= {0};
        ac[0]=1;
        for(int i=0; i<v[0].size(); i++)bc[v[0][i]]=1;
        while(!q.empty())
        {
            int vq=q.front();
            q.pop();
            if(ac[vq]==0&&bc[vq]==0)q.push(vq);
            else if(ac[vq]==1&&bc[vq]==0)
                for(int i=0; i<v[vq].size(); i++)bc[v[vq][i]]=1;
            else if(ac[vq]==0&&bc[vq]==1)
                for(int i=0; i<v[vq].size(); i++)ac[v[vq][i]]=1;
        }
        int j,flag=0;
        for(j=0; j<n; j++)
            if(ac[j]&&bc[j])
            {
                flag=1;
                break;
            }

        if(flag)printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");

    }

    return 0;
}
