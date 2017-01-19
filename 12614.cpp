#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n;
        scanf("%d",&n);
        int x=0,y;
        while(n--)
        {
            scanf("%d",&y);
            x=max(x,y);
        }
        printf("Case %d: %d\n",i,x);
    }
    return 0;
}
