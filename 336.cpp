#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <vector>
#include <memory>
#include <map>


using namespace std;


int BFS(int src,int ttl,map<int ,vector<int> >gf)
{
    int count=0;
    map<int, int>visited;
    map<int, int>level;
    visited[src]=1;
    level[src]=0;

    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        for(int i=0;i<gf[u].size();i++)
        {
            int v=gf[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[u]+1;
                if(level[v]>ttl)count++;
                q.push(v);
            }
        }
        q.pop();
    }

    count+=gf.size()-visited.size();
    return count;

}


int main()
{
    int node,x=0;
    while(scanf("%d",&node)&&node)
    {
        // initializing graph ....
        //for(int j=0;j<100;j++)fill(gf[j].begin(), gf[j].end(), NULL);
        map<int , vector<int> >gf;
        int u,v;
        for(int i=0; i<node; i++)
        {
            scanf("%d",&u);
            scanf("%d",&v);
            gf[u].push_back(v);
            gf[v].push_back(u);
        }

        // taking source && ttl ....
        int src, ttl;
        while(scanf("%d %d",&src,&ttl)&&(src||ttl))
        {
            int count=BFS(src,ttl,gf);
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++x,count,src,ttl);

        }


    }
    return 0;
}
