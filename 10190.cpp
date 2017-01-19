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
    int n,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(!m||n<m||m<2)
        {
            printf("Boring!\n");
                continue;
        }
        vector<int >v;
        v.push_back(n);
       bool flag=true;

        while(n>1)
        {
            int pre=n;
            if(n%m)
            {
                printf("Boring!\n");
                flag=false;
                break;
            }

            n/=m;
            v.push_back(n);
            if(pre<n)
            {
                printf("Boring!\n");
                flag=false;
                break;
            }
        }
        if(v.size()==1&&flag)
        {
            printf("Boring!\n");
                continue;
        }

        if(flag)
        {
            printf("%d",v[0]);
            for(int i=1;i<v.size();i++)printf(" %d",v[i]);
            printf("\n");
        }
    }


return 0;

}
