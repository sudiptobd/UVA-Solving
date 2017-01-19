#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
vector<int >vc[1000005];
int main()
{
    int n,m;
    while(scanf("%d %d",&n,&m)==2)
    {

        for(int i=0; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            vc[a].push_back(i+1);
        }
        for(int i=0; i<m; i++)
        {
            int k,v;
            scanf("%d %d",&k,&v);
            if(k>vc[v].size())printf("0\n");
            else printf("%d\n",vc[v][k-1]);
        }
    }
    return 0;
}
