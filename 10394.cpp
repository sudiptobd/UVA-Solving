#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
#define max 20000002

bool prime[max]= {false};
vector<int>v[100001];
void generate()
{
    for(int i=2;i<max;i++)
        if(!prime[i])
            for(int j=i+i;j<max;j+=i)
                prime[j]=true;
}


int main()
{
    generate();
    int vi=1;
    for(int i=2;i<max;i++)
    {
        if(vi>100000)break;
        if(!prime[i]&&!prime[i+2])
        {
            v[vi].push_back(i);
            v[vi++].push_back(i+2);
        }
    }
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("(%d, %d)\n",v[n][0],v[n][1]);
    }

    return 0;
}
