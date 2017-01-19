#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    int c=1;
    while(t--)
    {
        int n,p,q;
        scanf("%d %d %d",&n,&p,&q);
        int net=0,wet[n],i;
        for(i=1; i<=n; i++)scanf("%d",&wet[i]);
        int count=0;
        for(i=1; i<=n; i++)
        {

            if((net+wet[i])<=q&&count+1<=p)
            {
                count++;
                net+=wet[i];
            }

            else break;
        }
        i--;
        printf("Case %d: %d\n",c++,count);
    }
    return 0;
}
